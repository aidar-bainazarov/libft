/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:38:16 by hkimberl          #+#    #+#             */
/*   Updated: 2021/10/24 16:41:21 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	getlen(char const *s1)
{
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	while (s1[index])
	{
		count++;
		index++;
	}
	return (count);
}

static int	consist(char const *s1, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == *s1)
			return (1);
		index++;
	}
	return (0);
}

static char	*under_str(char const *s1, char const *set)
{
	size_t	index;
	int		start;
	int		finish;
	char	*loc;

	index = 0;
	while (consist(&s1[index], set) != 0)
		index++;
	start = index;
	index = 1;
	while (consist(&s1[getlen(s1) - index], set) != 0)
		index++;
	finish = getlen(s1) - index;
	if (finish < start)
		finish = start;
	loc = (char *)malloc(finish - start + 2);
	if (loc == ((void *)0))
		return ((void *)0);
	loc[finish - start + 1] = 0;
	index = 0;
	while (start <= finish)
		loc[index++] = s1[start++];
	return (loc);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
		return ((void *)0);
	return (under_str(s1, set));
}
