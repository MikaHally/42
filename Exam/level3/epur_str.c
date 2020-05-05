/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:39:04 by mhally            #+#    #+#             */
/*   Updated: 2018/09/10 11:39:06 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_epur_str(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
			count++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] == '\t' || str[i] == ' ') && str[i] != '\0')
			i++;
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\0')
		{
			ft_putchar(str[i]);
			count--;
			i++;
		}
		if (count != 0)
			ft_putchar(' ');
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
		ft_epur_str(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
