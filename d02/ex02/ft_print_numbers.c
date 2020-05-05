/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 11:43:04 by mhally            #+#    #+#             */
/*   Updated: 2018/08/23 12:00:43 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int start;
	int end;

	start = '0';
	end = '9';
	while (start <= end)
	{
		ft_putchar(start);
		start = start + 1;
	}
}