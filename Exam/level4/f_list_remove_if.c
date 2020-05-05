/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_list_remove_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:44:25 by mhally            #+#    #+#             */
/*   Updated: 2018/09/11 10:44:26 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;
	t_list *parent;
	t_list *tmp;

	list = *begin_list;
	parent = 0;
	tmp = 0;
	while (list)
	{
		tmp = list;
		if ((*cmp)(data_ref, list->data) == 0)
		{
			if (parent)
			{
				parent->next = list->next;
			}
			else
			{
				*begin_list = list->next;
			}
			free(list);
		}
		else
		{
			parent = list;
		}
		list = tmp->next;
	}
}
