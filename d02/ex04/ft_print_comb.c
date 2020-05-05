/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 21:12:52 by mhally            #+#    #+#             */
/*   Updated: 2018/08/23 12:01:37 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;
	char	d;

	a = 10;
	while (++a < 800)
	{
		b = 48 + a / 100;
		c = 48 + (a % 100) / 10;
		d = 48 + a % 10;
		if (b < c && c < d)
		{
			if (a != 12)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_putchar(b);
			ft_putchar(c);
			ft_putchar(d);
		}
	}
}
