/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:52:13 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 18:52:49 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_sim(const char *str)
{
	if (*str == ' ' || *str == '\n')
		return (1);
	if (*str == '\t' || *str == '\v')
		return (1);
	if (*str == '\f' || *str == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		min;

	min = 1;
	result = 0;
	while (is_sim(str) == 1)
		++str;
	if (*str == '-')
		min *= -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - 48);
		++str;
	}
	if ((unsigned long)result > 9223372036854775807 && min > 0)
		return (-1);
	else if ((unsigned long)result > 9223372036854775807 && min < 0)
		return (0);
	return (result * min);
}	
