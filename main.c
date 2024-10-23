/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 19:25:31 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 10:15:56 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "binary_tree.h"

int	main(void)
{
	t_btree	*tree;

	tree = new_node(100);
	tree->right = new_node(200);
	tree->left = new_node(50);
	tree->right->right = new_node(400);
	tree->right->left = new_node(101);
	tree->left->right = new_node(99);
	tree->left->left = new_node(25);

	// print_tree(tree);
	printf("************* Original tree *************\n");
	print_tree_loop(tree, 3);
	printf("************** Original tree size ********\n");
	printf("%d\n", size_binary_tree(tree));
	printf("************* Insert numbers *************\n");
	insert_number(tree, 300);
	insert_number(tree, 500);
	insert_number(tree, 98);
	insert_number(tree, 103);
	print_tree_loop(tree, 4);
	printf("************* Search number *************\n");
	if (search_number(tree, 50) != NULL)
		printf("Number was found\n");
	else
		printf("Number was NOT found\n");
	printf("************* Mirror tree *************\n");
	mirror_binary(tree);
	print_tree_loop(tree, 3);
	// print_tree(tree);
	printf("************** Binary tree size ********\n");
	printf("%d\n", size_binary_tree(tree));
}
