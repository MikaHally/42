/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   own.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:23:12 by mhally            #+#    #+#             */
/*   Updated: 2018/08/25 22:23:15 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void	rush(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (col == 1 && (row == 1 || row == y))
				ft_putchar('A');
			else if (row == 1 || row == y || col == 1 || col == x)
				ft_putchar('B');
			else if (col == x && (row == 1 || row == y))
				ft_putchar('C');
			else 
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}


int		main(void)
{
	rush(11, 2);
	return (0);
}