/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 18:16:45 by mhally            #+#    #+#             */
/*   Updated: 2018/09/03 18:16:47 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_first_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
		{
			if (j > 0)
				return (0);
			i++;
		}
		else
		{
			while (str[i] != '\t' && str[i] != ' ')
			{
				ft_putchar(str[i]);
				i++;
				j++;
			}
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_first_word(argv[1]);
		ft_putchar('\n');
		return (0);
	}
}
