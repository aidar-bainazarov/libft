/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:54:05 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 17:58:58 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	str;

	str = (char)c;
	while (*s)
	{
		if (*s == str)
			return ((char *)s);
		s++;
	}
	if (*s == str)
		return ((char *)s);
	return ((void *)0);
}
