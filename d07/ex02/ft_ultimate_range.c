/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 09:52:15 by mhally            #+#    #+#             */
/*   Updated: 2018/08/29 09:52:16 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *num;

	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	num = (int*)malloc(sizeof(*num) * (max - min));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	*range = num;
	return (i);
}
