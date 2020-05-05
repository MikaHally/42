/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:20:08 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 13:20:09 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_addition(int num1, int num2);
int 	ft_multiplication(int num1, int num2);
int		ft_substraction(int num1, int num2);
int		ft_division(int num1, int num2);
int		ft_modulo(int num1, int num2);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
#endif