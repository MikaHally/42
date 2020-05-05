/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:29:39 by mhally            #+#    #+#             */
/*   Updated: 2018/09/10 18:29:40 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_count_word(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i] != '\0')
    {
        if (((str[i] != ' ' && str[i] != '\t') && str[i] != '\n') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

int		ft_len_word(char *str, int i)
{
    int count;

    count = 0;
    while (((str[i] != ' ' && str[i] != '\t') && str[i] != '\n') && str[i] != '\0')
    {
        count++;
        i++;
    }
    return (count);
}

char	**ft_split(char *str)
{
    char **arr;
    int i;
    int j;
    int k;
    int check;

    i = 0;
    j = 0;
    arr = malloc(sizeof(char*) * (ft_count_word(str)));

    while (str[i] != '\0')
    {
        check = 0;
        k = 0;
        while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
        {
            i++;
        }
        arr[j] = malloc(sizeof(char) * (ft_len_word(str, i) + 1));
        while (((str[i] != ' ' && str[i] != '\t') && str[i] != '\n') && str[i] != '\0')
        {
            arr[j][k] = str[i];
            k++;
            i++;
            check = 1;
        }
        if (check == 1)
        {
            arr[j][k] = '\0';
        }
        j++;
    }
    return (arr);
}

int     main(int argc, char **argv)
{
    ft_split(argv[1]);
    return (0);
}
