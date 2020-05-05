/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:20:27 by mhally            #+#    #+#             */
/*   Updated: 2018/09/05 18:20:29 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	unsigned int nbr;

	nbr = n / 2;
	if (n == 1 || n == 0 || n == 2)
		return (1);
	while (nbr > 0)
	{
		if (nbr * nbr == n)
			return (1);
		nbr--;
	}
	return (0);
}

int main (void)
{
	unsigned int n;
	n = 5;
	is_power_of_2(n);
	return (0);
}
