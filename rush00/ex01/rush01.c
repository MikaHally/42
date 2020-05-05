/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davzheng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 23:06:07 by davzheng          #+#    #+#             */
/*   Updated: 2018/08/24 23:06:10 by davzheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		rush(int x, int y)
{
	if (x != 1 && y != 1)
		otherrush(x, y);
	else
		onerush(x, y);
}

void		onerush(int x, int y)
{
	int a;
	int b;

	b = 1;
	while (b != y + 1)
	{
		a = 1;
		while (a != x + 1)
		{
			if (a == 1 && b == 1)
				ft_putchar('/');
			else if ((a == x && b == 1) || (b == y && a == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
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
			if (((a == 1 && b == 1) || (b == y && a == x)))
				ft_putchar('/');
			else if ((a == x && b == 1) || (b == y && a == 1))
				ft_putchar('\\');
			else if (a == 1 || a == x || b == 1 || b == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
