/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 15:36:47 by mhally            #+#    #+#             */
/*   Updated: 2018/09/10 15:36:49 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	ft_putstr(str);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		while (i < argc)
		{
			ft_rstr_capitalizer(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
