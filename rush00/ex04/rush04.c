/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davzheng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 23:07:55 by davzheng          #+#    #+#             */
/*   Updated: 2018/08/24 23:07:59 by davzheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	if (x != 1 && y != 1)
		rushone(x, y);
	else
		otherrush(x, y);
}

void		rushone(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b != y + 1)
	{
		a = 1;
		while (a != x + 1)
		{
			if ((a == 1 && b == 1) || (b == y && a == x))
				ft_putchar('A');
			else if ((a == x && b == 1) || (b == y && a == 1))
				ft_putchar('C');
			else if (a == 1 || a == x || b == 1 || b == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}

void		otherrush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b != y + 1)
	{
		a = 1;
		while (a != x + 1)
		{
			if (b == 1 && a == 1)
				ft_putchar('A');
			else if (b == y & a == x)
				ft_putchar('C');
			else
				ft_putchar('B');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
