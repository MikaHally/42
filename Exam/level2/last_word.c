/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:14:32 by mhally            #+#    #+#             */
/*   Updated: 2018/09/04 22:14:34 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_last_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (str[i] == ' ' || str[i] == '\t')
	{
		i--;
	}
	while (str[i] != ' ' && str[i] != '\t' && i >= 0)
	{
		i--;
	}
	i++;
	while ((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\0'))
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
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
		ft_last_word(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
