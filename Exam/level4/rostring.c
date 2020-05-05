/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 19:05:41 by mhally            #+#    #+#             */
/*   Updated: 2018/09/10 19:05:48 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rostring(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	x = i;
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == ' ' || str[i] == '\t')
		{
			while ((str[i] == ' ' || str[i] == '\t') && (str[i] != '\0'))
			{
				i++;
			}
			ft_putchar(' ');
		}
	}
	ft_putchar(' ');
	i = x;
	while (str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_rostring(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
