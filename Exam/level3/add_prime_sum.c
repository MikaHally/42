/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:03:37 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 18:03:46 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		i++;
		is_negative = 1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
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

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_prime_sum(int nbr)
{
	int i;
	int count;

	i = 2;
	count = 0;
	while (i <= nbr)
	{
		if (ft_is_prime(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || argv[1] < 0)
	{
		ft_putchar('0');
	}
	else
	{
		ft_prime_sum(ft_atoi(argv[1]));
	}
	ft_putchar('\n');
	return (0);
}
