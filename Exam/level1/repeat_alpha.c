/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:15:56 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 18:15:58 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat_alpha(char *str)
{
	int i;
	int j;
	int x;

	i = 0;
	j = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			x = str[i] - 97;
			while (j <= x)
			{
				ft_putchar(str[i]);
				j++;
			}
			x = 0;
			j = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x = str[i] - 65;
			while (j <= x)
			{
				ft_putchar(str[i]);
				j++;
			}
			x = 0;
			j = 0;
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
		ft_repeat_alpha(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
