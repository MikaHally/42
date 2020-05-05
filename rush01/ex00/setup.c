/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:15:38 by mhally            #+#    #+#             */
/*   Updated: 2018/09/02 20:15:40 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**create_puzzle(char **argv)
{
	int i;
	int j;
	int **puzzle;

	i = 0;
	puzzle = (int **)malloc(sizeof(int *) * 9 + 1);
	while (i < 9)
	{
		j = 0;
		puzzle[i] = (int *)malloc(sizeof(int) * 9 + 1);
		while (j < 9)
		{
			if (argv[i][j] == '.')
				puzzle[i][j] = 0;
			else if (argv[i][j] >= '1' && argv[i][j] <= '9')
				puzzle[i][j] = argv[i][j] - '0';
			else
				return (0);
			j++;
		}
		i++;
	}
	return (puzzle);
}

void	free_memory(int **puzzle)
{
	int i;

	i = 0;
	while (puzzle[i])
	{
		free(puzzle[i]);
		i++;
	}
	free(puzzle);
}
