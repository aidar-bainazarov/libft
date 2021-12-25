/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:50:12 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 19:25:01 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ch;
	const unsigned char	*src_ch;
	size_t				count;

	dst_ch = (unsigned char *)dst;
	src_ch = (const unsigned char *)src;
	if (dst == (void *)0 && src == (void *)0)
		return ((void *)0);
	if ((dst_ch > src_ch) && (src_ch + len > dst_ch))
	{
		while (len > 0)
		{
			dst_ch[len - 1] = src_ch[len - 1];
			len--;
		}
		return (dst);
	}
	count = 0;
	while (len--)
	{
		dst_ch[count] = src_ch[count];
		count++;
	}
	return (dst);
}
