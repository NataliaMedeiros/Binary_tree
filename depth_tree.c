/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   depth_tree.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/23 11:06:09 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 11:16:35 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

/* using recursion*/
int	depth_btree(t_btree *tree)
{
	int	i_left;
	int	i_right;

	if (tree == NULL)
		return (0);
	i_left = depth_btree(tree->left);
	i_right = depth_btree(tree->right);
	if (i_left > i_right)
		return (i_left + 1);
	return (i_right + 1);
}

/* using loop*/
// int	depth_btree(t_btree *tree)
// {
// 	int	i_left;
// 	int	i_right;

// 	i_left = 0;
// 	i_right = 0;
// 	if (tree == NULL)
// 		return (0);
// 	while (tree->left != NULL)
// 	{
// 		i_left++;
// 		tree = tree->left;
// 	}
// 	while (tree->right != NULL)
// 	{
// 		i_right++;
// 		tree = tree->right;
// 	}
// 	if (i_left > i_right)
// 		return (i_left + 1);
// 	return (i_right + 1);
// }