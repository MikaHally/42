/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:52:56 by mhally            #+#    #+#             */
/*   Updated: 2018/09/07 09:52:58 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hidenp(char *s1, char *s2)
{
	while (*s2)
	{
		if (*s1 == *s2)
			s1++;
		s2++;
	}
	(*s1 == '\0') ? ft_putchar('1') : ft_putchar('0');
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_hidenp(argv[1], argv[2]);
		ft_putchar('\n');
	}
	return (0);
}
