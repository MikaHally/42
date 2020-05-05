/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 11:39:17 by mhally            #+#    #+#             */
/*   Updated: 2018/09/10 11:39:18 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_pgcd(char *str1, char *str2)
{
	int i;
	int a;
	int b;
	int x;
	int check;

	i = 1;
	a = 0;
	b = 0;
	x = 0;
	while ((i <= atoi(str1)) && (i <= atoi(str2)))
	{
		check = 0;
		a = atoi(str1) / i;
		b = atoi(str2) / i;
		if ((i * a == atoi(str1)) && (i * b == atoi(str2)))
		{
			check = 1;
		}
		if ((i > x) && (check == 1))
		{
			x = i;
		}
		i++;
	}
	printf("%d", x);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("\n");
	}
	else
	{
		ft_pgcd(argv[1], argv[2]);
		printf("\n");
	}
	return (0);
}
