/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 19:37:26 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 19:37:27 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int *range;
	int i;
	int x = start;
	int y = end;

	i = 0;
	range = malloc(sizeof(*range) * ((end - start) + 1));
	if (end > start)
	{
		while (start <= end)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			range[i] = start;
			start--;
			i++;
		}
	}
	return (range);
}
