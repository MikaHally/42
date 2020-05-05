/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:16:10 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 18:16:12 by mhally           ###   ########.fr       */
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

void	ft_replace(char *s1, char *a, char *b)
{
	int i;
	int j;
	int x;
	int y;

	i = 0;
	j = 0;
	x = 0;
	y = 0;
	while (a[x] != '\0')
	{
		x++;
	}
	while (b[y] != '\0')
	{
		y++;
	}
	if (x == 1 && y == 1)
	{
		while (s1[i] != '\0')
		{
			if (s1[i] == a[j])
			{
				s1[i] = b[j];
			}
			i++;
		}
	}
	ft_putstr(s1);
}

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_replace(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
		return (0);
	}
}
