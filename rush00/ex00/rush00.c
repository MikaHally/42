/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davzheng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 23:05:26 by davzheng          #+#    #+#             */
/*   Updated: 2018/08/24 23:05:32 by davzheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b != y + 1)
	{
		a = 1;
		while (a != x + 1)
		{
			if ((b == 1 || b == y) && (a == 1 || a == x))
				ft_putchar('o');
			else if (a == 1 || a == x)
				ft_putchar('|');
			else if (b == 1 || b == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
			a++;
			
		}
		ft_putchar('\n');
		b++;
	}
}
