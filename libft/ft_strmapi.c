/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:22:56 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/23 17:44:46 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(char const *s1)
{
	size_t	count;

	count = 0;
	while (*s1)
	{
		count++;
		s1++;
	}
	return (count);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*loc;

	if (!s || !f)
		return ((void *)0);
	loc = (char *)malloc(get_len(s) + 1);
	if (loc == (void *)0)
		return ((void *)0);
	index = 0;
	while (s[index])
	{
		*(loc + index) = f(index, s[index]);
		index++;
	}
	loc[get_len(s)] = 0;
	return (loc);
}
