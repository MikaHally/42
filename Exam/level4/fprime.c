/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:50:30 by mhally            #+#    #+#             */
/*   Updated: 2018/09/11 13:50:33 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_prime(int nbr)
{
	int i;

	i = 2;
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_prime(int nbr)
{
	int i;

	i  = 2;
	if (ft_is_prime(nbr))
	{
		printf("%d", nbr);
		return (0);
	}
	else
	{
		while (!(ft_is_prime(nbr)))
		{
			if (nbr % i == 0)
			{
				nbr = nbr / i;
				printf("%d", i);
				printf("*");
			}
			else
			{
				i++;
				while (!(ft_is_prime(i)))
					i++;
			}
		}
	}
	printf("%d", nbr);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
	{
		ft_prime(atoi(argv[1]));
		printf("\n");
	}
	return (0);
}
