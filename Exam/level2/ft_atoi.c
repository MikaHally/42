/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:20:56 by mhally            #+#    #+#             */
/*   Updated: 2018/09/01 15:20:58 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int j;
	int is_negative;

	i = 0;
	j = 0;
	is_negative = 0;
	while (str[i] == ' ' || (str[i] > 8 && str[i] < 14))
	{
		i++;
	}
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		i++;
		is_negative = 1;
	}
	while (str[i] != '\0')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	if (is_negative)
		j = -j;
	return (j);
}
