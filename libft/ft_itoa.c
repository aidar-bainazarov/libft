/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:32:49 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 18:16:43 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(long n)
{
	size_t	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while ((n / 10) > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*loc;
	long	m;
	size_t	len;

	m = n;
	len = get_len(m);
	if (m < 0)
		m *= -1;
	loc = (char *)malloc(len + 1);
	if (loc == (void *)0)
		return ((void *)0);
	loc[len] = 0;
	while (len)
	{
		loc[len - 1] = (m % 10) + '0';
		m /= 10;
		len--;
	}
	if (n < 0)
		*loc = '-';
	return (loc);
}
