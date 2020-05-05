/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:23:08 by mhally            #+#    #+#             */
/*   Updated: 2018/09/01 15:23:09 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_inter(char *str1, char *str2)
{
	char tab[999];
	int i;
	int j;
	int k;
	int m;
	int check;

	i = 0;
	m = 0;
	while (str1[i] != '\0')
	{
		check = 0;
		k = 0;
		j = 0;
		while (str2[j] != '\0')
		{
			if (str1[i] == str2[j])
			{
				while (tab[k] != '\0')
				{
					if (str1[i] == tab[k])
					{
						check = 1;
					}
					k++;
				}
				if (check != 1)
				{
					tab[m] = str1[i];
					m++;
				}
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (tab[i] != '\0')
	{
		ft_putchar(tab[i]);
		i++;
	}
}

int 	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_inter(argv[1], argv[2]);
		ft_putchar('\n');
		return (0);
	}
}
