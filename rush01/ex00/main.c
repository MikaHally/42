/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:05:15 by mhally            #+#    #+#             */
/*   Updated: 2018/09/02 20:05:19 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**create_puzzle(char **argv);
void	free_memory(int **puzzle);
int		solve_sudoku(int **numbers, int value);
void	print_puzzle(int **puzzle);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int **puzzle;

	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	else
	{
		puzzle = create_puzzle(&argv[1]);
		if (!puzzle)
			ft_putstr("Error\n");
		else if (solve_sudoku(puzzle, 0))
			print_puzzle(puzzle);
		else
			ft_putstr("Error\n");
	}
	free_memory(puzzle);
	return (0);
}
