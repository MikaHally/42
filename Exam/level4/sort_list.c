/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:17:28 by mhally            #+#    #+#             */
/*   Updated: 2018/09/11 18:17:30 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *next;
	t_list *start;
	int tmp;
	int check;

	start = lst;
	tmp = 0;
	check = 0;
	while (list->next)
	{
		next = lst->next;
		if ((cmp)(lst->data, next->data) == 0)
		{
			tmp = lst->data;
			lst->data = next->data;
			next->data = tmp;
			check = 1;
		}
		if (check)
		{
			list = start;
			check = 0;
		}
		lst = lst->next;
	}
	return (lst);
}
