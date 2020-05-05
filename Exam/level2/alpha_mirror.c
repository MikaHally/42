/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:20:20 by mhally            #+#    #+#             */
/*   Updated: 2018/09/01 15:20:22 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			if (str[i] <= 'M')
			{
				str[i] = 90 - (str[i] - 65);
			}
			else
			{
				str[i] = 65 + (90 - str[i]);
			}
			ft_putchar(str[i]);
		}
		else if (str[i] <= 'z' && str[i] >= 'a')
		{
			if ((str[i] <= 'm'))
			{
				str[i] = 122 - (str[i] - 97);
			}
			else
			{
				str[i] = 97 + (122 - str[i]);
			}
			ft_putchar(str[i]);
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
		repeat_alpha(argv[1]);
		return (0);
	}
}

