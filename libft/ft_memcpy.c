/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 14:25:33 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 19:23:44 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	const char		*src_p;
	size_t			index;

	if (src == (void *)0 && dest == (void *)0)
		return ((void *)0);
	index = 0;
	src_p = (char *)src;
	p = (unsigned char *)dest;
	while (n--)
	{
		p[index] = src_p[index];
		index++;
	}
	return (dest);
}
