/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_number.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 20:29:48 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 10:20:28 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

t_btree	*search_number(t_btree *tree, int nb)
{
	if (tree == NULL)
		return (NULL);
	if (tree->data == nb)
		return (tree);
	else if (tree->data > nb)
		return (search_number(tree->left, nb));
	return (search_number(tree->right, nb));
}