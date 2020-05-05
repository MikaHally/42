/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhally <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 14:55:02 by mhally            #+#    #+#             */
/*   Updated: 2018/09/06 14:55:03 by mhally           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	ft_insert_data(t_btree *root, void *item, int (*cmpf)(void *, void *))
{
	if (cmpf(item, root->item) < 0)
	{
		if (!root->left)
			root->left = btree_create_node(item);
		else
			ft_insert_data(root->left, item, cmpf);
	}
	else
	{
		if (!root->right)
			root->right = btree_create_node(item);
		else
			ft_insert_data(root->right, item, cmpf);
	}
}

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	if (!*root)
	{
		*root = btree_create_node(item);
		return ;
	}
	ft_insert_data(*root, item, cmpf);
}
