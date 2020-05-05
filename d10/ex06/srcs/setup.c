/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:32:36 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 13:32:37 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

int	ft_atoi(char *str);

void		ft_putchar(char c);
void		ft_putstr(char *str);

void		ft_setup(char nbr1, char nbr2, char operator)
{
	int num1;
	int num2;
	int(*f)(int, int);

	num1 = ft_atoi(&nbr1);
	num2 = ft_atoi(&nbr2);
	if (operator == '+')
		f = &ft_addition;
	if (operator == '-')
		f = &ft_substraction;
	if (operator == '/' && num2 != 0)
	{
		f = &ft_division;
	}
	/*
	else
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	*/
	if (operator == '*')
	{
		f = &ft_multiplication;
	}
	if (operator == '%' && num2 != 0)
	{
		f = &ft_modulo;
	}
	/*
	else
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	*/
	f(num1, num2);
}
