/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 20:11:22 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 20:11:24 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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

int		ft_atoi(char *str)
{
	int i;
	int j;
	int is_negative;

	i = 0;
	j = 0;
	is_negative = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	if (str[i] == '-')
	{
		i++;
		is_negative = 1;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	if (is_negative == 1)
		j = -j;
	return (j);
}

void	ft_putnbr(int nbr)
{
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

void	ft_tab_mult(char *nbr)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i < 10)
	{
		ft_putchar(i + '0');
		ft_putstr(" x ");
		ft_putstr(nbr);
		ft_putstr(" = ");
		j = i * ft_atoi(nbr);
		ft_putnbr(j);
		ft_putchar('\n');
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
		ft_tab_mult(argv[1]);
	}
}
