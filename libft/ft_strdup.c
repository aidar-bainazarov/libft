/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:24:02 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 18:20:55 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_str;
	char	*p;
	char	*start;

	len_str = ft_strlen(s1) + 1;
	p = (char *)malloc(len_str);
	if (!p)
		return ((void *)0);
	start = p;
	while (*s1)
	{
		*p = *s1;
		p++;
		s1++;
	}
	*p = *s1;
	return (start);
}
