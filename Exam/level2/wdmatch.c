/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:20:55 by mhally            #+#    #+#             */
/*   Updated: 2018/09/05 18:20:56 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_wdmatch(char *str1, char *str2)
{
	int i;
	int j;
	int x;
	int count;

	count = 0;
	i = 0;
	x = 0;
	while (str1[i] != '\0')
	{
		count++;
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		x = 0;
		while (str2[j] != '\0' && x != 1)
		{
			if (str2[j] == str1[i])
			{
				x = 1;
				count--;
			}
			j++;
		}
		i++;
	}
	if (count == 0)
		ft_putstr(str1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_wdmatch(argv[1], argv[2]);
		ft_putchar('\n');
		return (0);
	}
}
