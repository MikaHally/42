/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:45:13 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 12:45:14 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do-op.h"

void	ft_setup(char nbr1, char nbr2, char operator);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int k;
	int j;

	k = 0;
	j = 0;
	if (argc != 4)
	{
		return (0);
	}
	else if (*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '/' 
			&& *argv[2] != '*')
	{
		return (0);
	}
	while (*argv[1] != '\0')
	{
		if (*argv[1] <= '9' || *argv[1] >= '0')
		{
			k++;
		}
	}
	while (*argv[3] != '\0')
	{
		if (*argv[1] <= '9' || *argv[1] >= '0')
		{
			j++;
		}
	}
	if (k == 0 || j == 0)
	{
		return (0);
	}
	ft_setup(*argv[1], *argv[3], *argv[2]);
	return (1);
}
