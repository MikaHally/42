/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:40:17 by mhally            #+#    #+#             */
/*   Updated: 2018/09/13 11:40:18 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfuck.h"


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		char arr[2048] = {0};
		char *current_byte = arr;
		int i;
		int j;
		int passed_brackets;

		passed_brackets = 0;
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '>')
				j++;
			if (argv[1][i] == '<')
				j--;
			if (argv[1][i] == '+')
				current_byte[j]++;
			if (argv[1][i] == '-')
				current_byte[j]--;
			if (argv[1][i] == '.')
				ft_putchar(current_byte[j]);
			if (argv[1][i] == '[' && current_byte[j] == 0)
			{
				while (1)
				{
					i++;
					if (argv[1][i] == '[')
						passed_brackets++;
					if (argv[1][i] == ']' && passed_brackets == 0)
					{
						passed_brackets = 0;
						break;
					}
					if (argv[1][i] == ']')
						passed_brackets--;
				}
			}
			if (argv[1][i] == ']' && current_byte[j] != 0)
			{
				while (1)
				{
					i--;
					if (argv[1][i] == ']')
						passed_brackets++;
					if (argv[1][i] == '[' && passed_brackets == 0)
					{
						passed_brackets = 0;
						break;
					}
					if (argv[1][i] == '[')
						passed_brackets--;
				}
			}
			i++;
		}
	}
	return (0);
}
