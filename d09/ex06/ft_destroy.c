/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:04:19 by mhally            #+#    #+#             */
/*   Updated: 2018/08/30 23:04:20 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include <stdlib.h>

void	ft_destroy(char ***factory)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (factory[a])
	{
		while (factory[a][b])
		{
			while (factory[a][b][c])
			{
				free(factory[a][b][c]);
				c++;
			}
			free(factory[a][b]);
			c = 0;
			b++;
		}
		free(factory[a]);
		b = 0;
		a++;
	}
	free(factory);
}
