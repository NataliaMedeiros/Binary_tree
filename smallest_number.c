/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   smallest_number.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 10:34:58 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 10:39:02 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

int	find_smallest(t_btree *tree)
{
	int	res;
	int	left;
	int	right;

	if (tree == NULL)
		return (INT_MAX);
	res = tree->data;
	left = find_smallest(tree->left);
	right = find_smallest(tree->right);
	if (left < res)
		return (left);
	else if (right < res)
		return (right);
	return (res);
}