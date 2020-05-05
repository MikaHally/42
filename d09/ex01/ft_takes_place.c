/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:34:08 by mhally            #+#    #+#             */
/*   Updated: 2018/08/30 19:12:53 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int i;

	i = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (i >= 1 && i < 11)
		printf("%d.00 A.M AND %d.00 A.M\n", i, (i + 1));
	else if (i == 0 || i == 24)
		printf("12.00 A.M AND 01.00 A.M\n");
	else if (i == 11)
		printf("%d.00 A.M AND %d.00 P.M\n", i, (i + 1));
	else if (i == 23)
		printf("11.00 P.M AND 12.00 A.M\n");
	else if (i == 12)
		printf("12.00 P.M AND 01.00 P.M\n");
	else
	{
		i = i - 12;
		printf("%d.00 P.M AND %d.00 P.M\n", i, (i + 1));
	}
}
