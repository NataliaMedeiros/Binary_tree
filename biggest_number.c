/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   biggest_number.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 10:21:47 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 11:23:58 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

/* using recursion */
int	find_biggest(t_btree *tree)
{
	int	res;
	int	left;
	int	right;

	if (tree == NULL)
		return (INT_MIN);
	res = tree->data;
	left = find_biggest(tree->left);
	right = find_biggest(tree->right);
	if (left > res)
		return (left);
	else if (right > res)
		return (right);
	return (res);
}

/* using loop*/
// int	find_biggest(t_btree *tree)
// {
// 	int	res;
// 	int	left;
// 	int	right;
// 	t_btree	*copy_tree;

// 	copy_tree = tree;
// 	if (tree == NULL)
// 		return (INT_MIN);
// 	res = tree->data;
// 	while (tree->left != NULL)
// 	{
// 		tree = tree->left;
// 		left = tree->data;
// 	}
// 	while (copy_tree->right != NULL)
// 	{
// 		copy_tree = copy_tree->right;
// 		right = copy_tree->data;
// 	}
// 	if (left > res)
// 		return (left);
// 	else if (right > res)
// 		return (right);
// 	return (res);
// }