/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:47:01 by mhally            #+#    #+#             */
/*   Updated: 2018/09/07 10:47:03 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
	if (str[i] == '-')
	{
		i++;
		is_negative = 1;
	}
	if (str[i] == '+')
		i++;
	while (str[i] <= '9' && str[i] >= '0')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
		j = -j;
	return (j);
}

int		ft_print_hex(int nbr)
{
	if (nbr < 0)
		return (1);
	if (nbr >= 16)
		ft_print_hex(nbr / 16);
	if (nbr % 16 < 10)
		ft_putchar((nbr % 16) + '0');
	else
		ft_putchar(((nbr % 16) - 10) + 'a');
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{	
		ft_print_hex(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}
