/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:16:35 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 18:16:37 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rotate(char *str)
{
	int i;
	int x;

	i = 0;
	while (str[i] != '\0')
	{
		x = 0;
		if (str[i] <= 'm' && str[i] >= 'a')
		{
			ft_putchar(str[i] + 13);
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			x = 97 + (13 - (122 - str[i])) - 1;
			ft_putchar(x);
		}
		else if (str[i] <= 'M' && str[i] >= 'A')
		{
			ft_putchar(str[i] + 13);
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			x = 65 + (13 - (90 - str[i])) - 1;
			ft_putchar(x);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_rotate(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
