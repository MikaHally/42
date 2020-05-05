/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz.conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:14:27 by mhally            #+#    #+#             */
/*   Updated: 2018/08/31 10:14:28 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (0);
	}
	else if (base % 2 == 0)
	{
		base = base / 2;
	}
	else
	{
		base = (3 * base) + 1;
	}
	return (ft_collatz_conjecture(base) + 1);
}
