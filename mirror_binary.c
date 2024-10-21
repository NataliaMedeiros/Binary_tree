/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mirror_binary.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 20:03:06 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/21 20:03:34 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

/* To write the mirror function, we need two variables, one to be the new tree
and the other to be used as temp variable and don't lose the variable. And then
we can use a recursive function to call this to right and another to call to
the left, and then when this two recursive find the leaf they will stop */
t_btree	*mirror_binary(const t_btree *tree)
{
	t_btree	*new;
	t_btree	*temp;

	if (tree == NULL)
		return (NULL);
	new = (t_btree *)tree;
	temp = new->right;
	new->right = new->left;
	new->left = temp;
	mirror_binary(new->right);
	mirror_binary(new->left);
	return (new);
}