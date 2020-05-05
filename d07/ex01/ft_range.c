/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 09:51:40 by mhally            #+#    #+#             */
/*   Updated: 2018/08/29 09:51:41 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int x;
	int i;
	int *num;

	x = max - min;
	if (max <= min)
		return (0);
	num = malloc(sizeof(int) * (x));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		min++;
		i++;
	}
	return (num);
}
