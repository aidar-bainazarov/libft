/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:12:21 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 19:26:06 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(const char *str)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const unsigned char	*src_p;
	unsigned char		*dst_p;
	size_t				len;

	if (dstsize < 1)
		return (get_len(src));
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *) src;
	len = dstsize - 1;
	while (len && *src_p)
	{
		*dst_p = *src_p;
		dst_p++;
		src_p++;
		len--;
	}
	if (*dst_p != 0)
		*dst_p = 0;
	return (get_len(src));
}
