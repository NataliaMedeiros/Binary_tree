/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   insert_number.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 20:13:34 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 10:19:31 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

t_btree	*insert_number(t_btree *tree, int data)
{
	t_btree	*new_tree;

	new_tree = tree;
	if (new_tree == NULL)
		new_tree = new_node(data);
	else if (data < new_tree->data)
	{
		if (new_tree->left == NULL)
			new_tree->left = new_node(data);
		else
			return (insert_number(new_tree->left, data));
	}
	else if (data > new_tree->data)
	{
		if (new_tree->right == NULL)
			new_tree->right = new_node(data);
		else
			return (insert_number(new_tree->right, data));
	}
	return (new_tree);
}