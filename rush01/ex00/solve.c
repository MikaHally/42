/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:17:15 by mhally            #+#    #+#             */
/*   Updated: 2018/09/02 20:17:17 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		validate(int **numbers, int row, int col, int value);

int		solve_sudoku(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (numbers[x][y] != 0)
		return (solve_sudoku(numbers, value + 1));
	while (i < 10)
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (solve_sudoku(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = 0;
		}
		i++;
	}
	return (0);
}
