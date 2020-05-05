/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:37:03 by mhally            #+#    #+#             */
/*   Updated: 2018/08/23 13:05:13 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (z >= a)
	{
		ft_putchar(z);
		z = z - 1;
	}
}
