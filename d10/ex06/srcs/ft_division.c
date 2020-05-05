/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_division.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 15:44:15 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 15:44:17 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

void	ft_division(int num1, int num2)
{
	int quot;

	if (num2 == 0)
	{
		write(1, "Stop : division by zero\n", 24);
	}
	else
	{
		quot = num1 - num2;
		ft_putnbr(quot);
	}
}
