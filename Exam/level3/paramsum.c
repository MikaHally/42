/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:31:49 by mhally            #+#    #+#             */
/*   Updated: 2018/09/07 10:31:50 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_paramsum(int nbr)
{
	if (nbr >= 10)
	{
		ft_paramsum(nbr / 10);
		ft_paramsum(nbr % 10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_paramsum(argc - 1);
		ft_putchar('\n');
	}
	return (0);
}
