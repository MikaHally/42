/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:22:57 by mhally            #+#    #+#             */
/*   Updated: 2018/09/05 18:22:59 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_union(char *str1, char *str2)
{
    char tab[999];
    int i;
    int j;
    int check;

    i = 0;
    while (str1[i] != '\0')
    {
        check = 0;
        j = 0;
        while (tab[j] != '\0')
        {
            if (str1[i] == tab[j])
            {
                check = 1;
            }
            j++;
        }
        if (check != 1)
        {
            tab[j] = str1[i];
        }
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        check = 0;
        j = 0;
        while (tab[j] != '\0')
        {
            if (str2[i] == tab[j])
            {
                check = 1;
            }
            j++;
        }
        if (check != 1)
        {
            tab[j] = str2[i];
        }
        i++;
    }
    i = 0;
    while (tab[i] != '\0')
    {
    	ft_putchar(tab[i]);
    	i++;
    }
}

int		main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (1);
	}
	else
	{
		ft_union(argv[1], argv[2]);
		ft_putchar('\n');
		return (0);
	}
}
