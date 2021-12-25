/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:38:39 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 19:27:28 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_consist(const char *s1, const char *s2, size_t len)
{
	size_t	count;

	count = 0;
	while (s2[count])
	{
		if (count > len)
			return (0);
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	return (1);
}

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	count;

	p1 = (char *)str1;
	p2 = (char *)str2;
	if (!*str2)
		return ((char *)p1);
	count = 0;
	while (p1[count] && len--)
	{
		if (*p1 == *p2)
		{
			if (is_consist(p1, p2, len) == 1)
				return ((char *)p1);
		}
		p1++;
	}
	return ((void *)0);
}
