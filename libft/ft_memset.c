/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:49:50 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/23 17:32:18 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	char_to_insert;

	p = (unsigned char *)b;
	char_to_insert = (unsigned char)c;
	while (len)
	{
		*p = char_to_insert;
		p++;
		len--;
	}
	return (b);
}
