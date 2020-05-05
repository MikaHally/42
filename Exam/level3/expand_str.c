/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 18:27:22 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 18:27:23 by mhally           ###   ########.fr       */
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

void	ft_expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\t' && str[i] != ' ')
			j++;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] != '\0' && (str[i] == ' ' || str[i] == '\t')))
		{
			i++;
		}
		while ((str[i] != '\0' && (str[i] != ' ' && str[i] != '\t')))
		{
			ft_putchar(str[i]);
			j--;
			i++;
		}
		if (str[i] != '\0' && j != 0)
			ft_putstr("   ");
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		ft_expand_str(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
