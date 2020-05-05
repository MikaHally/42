/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:03:43 by mhally            #+#    #+#             */
/*   Updated: 2018/08/23 12:02:22 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (++a < 10000)
	{
		b = a / 100;
		c = a % 100;
		if (b < c)
		{
			if (a != 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(48 + b / 10);
			ft_putchar(48 + b % 10);
			ft_putchar(' ');
			ft_putchar(48 + c / 10);
			ft_putchar(48 + c % 10);
		}
	}
}
