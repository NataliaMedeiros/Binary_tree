/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   search_number.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 20:29:48 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/21 20:36:07 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

t_btree	*search_number(t_btree *tree, int nb)
{
	if (tree == NULL || tree->data == nb)
		return (tree);
	else if (nb < tree->data)
		return (search_number(tree->left, nb));
	else if (nb > tree->data)
		return (search_number(tree->right, nb));
	return (tree);
}