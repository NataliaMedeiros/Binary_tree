/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 19:21:48 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/21 19:57:34 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

t_btree	*new_node(int data)
{
	t_btree	*node;

	node = malloc(sizeof(t_btree));
	if (node == NULL)
		return (NULL);
	node->data = data;
	node->right = NULL;
	node->left = NULL;
	return (node);
}

