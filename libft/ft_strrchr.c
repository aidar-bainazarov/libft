/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:53:50 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 17:57:53 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *s)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		s++;
		count++;
	}
	if (count == 0)
		return (0);
	else
		return (count);
}

char	*ft_strrchr(const char *s, int c)
{
	char	str;
	char	*p;
	size_t	last_char;

	p = (char *)s;
	str = (char)c;
	last_char = get_len(s);
	while (last_char > 0)
	{
		if (p[last_char] == str)
			return (&p[last_char]);
		last_char--;
	}
	if (p[last_char] == str)
		return (&p[last_char]);
	return ((void *)0);
}
