/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 20:46:05 by mhally            #+#    #+#             */
/*   Updated: 2018/09/11 20:46:07 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_wstr(char *str)
{
	int i;
	int j;
	int num[999] = {0};

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' ' && str[i + 1] != '\t'))
		{
			num[j] = i + 1;
			j++;
		}
		i++;
	}
	j -= 1;
	while (j >= 0)
	{
		i = num[j];
		while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		ft_putchar(' ');
		j--;
	}
	i = 0;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_rev_wstr(argv[1]);
		ft_putchar('\n');
	}
	return (0);
}
