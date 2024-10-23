/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   size_binary.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 09:16:01 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 09:21:16 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

int	size_binary_tree(t_btree *tree)
{
	int	i;

	i = 0;
	if (tree == NULL)
		return (0);
	i += size_binary_tree(tree->left) + size_binary_tree(tree->right) + 1;
	return (i);
}