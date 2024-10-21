/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_tree.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 19:34:43 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/21 20:05:47 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

void	print_tree(t_btree *tree)
{
	if (tree == NULL)
		printf("NULL");
	else
	{
		printf("\t\t\t\t\tRoot: %d\n", tree->data);
		printf("\t\tlevel 1: %d", tree->left->data);
		printf("\t\t\t\tlevel 1: %d\n", tree->right->data);
		printf("level 2: %d", tree->left->left->data);
		printf("\t\tlevel 2: %d", tree->left->right->data);
		printf("\t\tlevel 2: %d", tree->right->left->data);
		printf("\t\tlevel 2: %d\n", tree->right->right->data);
	}
}

void	print_tree_loop(t_btree *tree, int depth)
{
	if (tree == NULL)
		return;
	
	print_tree_loop(tree->right, depth + 1); // Print right subtree first
	for (int i = 0; i < depth; i++)    // Indent according to the depth
		printf("    ");
	printf("%d\n", tree->data);        // Print current node value
	print_tree_loop(tree->left, depth + 1);  // Then print left subtree
}