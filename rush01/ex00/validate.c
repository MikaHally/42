/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:16:59 by mhally            #+#    #+#             */
/*   Updated: 2018/09/02 20:17:00 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		check_row_column(int **numbers, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((numbers[i][col] == value) || (numbers[row][i] == value))
			return (0);
		i += 1;
	}
	return (1);
}

int		check_box(int **numbers, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

int		validate(int **numbers, int row, int col, int value)
{
	if (check_box(numbers, row, col, value)
		&& check_row_column(numbers, row, col, value))
		return (1);
	else
		return (0);
}
