/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:17:39 by mhally            #+#    #+#             */
/*   Updated: 2018/09/11 18:17:41 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	int i;
	int check;
	int tmp;

	i = 1;
	check = 0;
	tmp = 0;
	while (i < size)
	{
		if (tab[i] < tab[i - 1])
		{
			tmp = tab[i];
			tab[i] = tab[i - 1];
			tab[i - 1] = tmp;
			check = 1;
		}
		i++;
	}
	if (check == 1)
	{
		sort_int_tab(tab, size);
	}
}
