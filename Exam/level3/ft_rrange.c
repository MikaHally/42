/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 15:20:57 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 15:20:59 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int *range;
	int i;

	i = 0;
	range = malloc(sizeof(*range) * ((end - start) + 1));
	if (end > start)
	{
		while (end >= start)
		{
			range[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (end <= start)
		{
			range[i] = start;
			i++;
			start--;
		}
	}
	return (range);
}
