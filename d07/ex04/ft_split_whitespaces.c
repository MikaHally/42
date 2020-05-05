/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 09:53:19 by mhally            #+#    #+#             */
/*   Updated: 2018/08/29 09:53:21 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_num_word(char *str)
{
	int a;
	int b;
	int count;

	a = 0;
	b = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[a])
	{
		while (str[a] != '\t' && str[a] != ' ' && str[a] != '\n' && str[a])
		{
			a++;
			b = 1;
		}
		if (str[a] == '\t' || str[a] == ' ' || str[a] == '\n' || str[a] == '\0')
		{
			count += (b == 1) ? 1 : 0;
			b = 0;
			a++;
		}
	}
	return (count);
}

int		ft_len_w(char *str, int a)
{
	int count;

	count = 0;
	while (str[a] != '\t' && str[a] != ' ' && str[a] != '\n' && str[a])
	{
		count++;
		a++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**des;
	int		a;
	int		n;
	int		k;

	a = 0;
	n = 0;
	if ((des = malloc(sizeof(char*) * (ft_num_word(str) + 1))) == 0)
		return (0);
	while (str[a])
	{
		while ((str[a] == '\t' || str[a] == ' ' || str[a] == '\n') && str[a])
			a++;
		if (str[a])
		{
			k = 0;
			if ((des[n] = malloc(sizeof(char) * ft_len_w(str, a) + 1)) == 0)
				return (0);
			while (str[a] != '\t' && str[a] != ' ' && str[a] != '\n' && str[a])
				des[n][k++] = str[a++];
			des[n++][k] = '\0';
		}
	}
	des[n] = 0;
	return (des);
}
