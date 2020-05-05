/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:03:14 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 10:03:15 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *items)
{
	t_btree *r;

	r = malloc(sizeof(*r));
	if (r)
	{
		r->left = NULL;
		r->right = NULL;
		r->item = item;
	}
	return (r);
}
