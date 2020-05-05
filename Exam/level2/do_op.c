/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 15:20:41 by mhally            #+#    #+#             */
/*   Updated: 2018/09/01 15:20:42 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		main (int argc, char **argv)
{
	if (argc == 4)
	{
		if (*argv[2] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		if (*argv[2] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		if (*argv[2] == '/')
			printf("%d", atoi(argv[1]) / atoi(argv[3]));
		if (*argv[2] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		if (*argv[2] == '%')
			printf("%d", atoi(argv[1]) % atoi(argv[3]));
	}
	printf("\n");
	return (0);
}
