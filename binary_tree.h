/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   binary_tree.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nmedeiro <nmedeiro@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/10/21 19:20:53 by nmedeiro      #+#    #+#                 */
/*   Updated: 2024/10/23 09:18:44 by nmedeiro      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BINARY_TREE_H
# define BINARY_TREE_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_tree
{
	int				data;
	struct s_tree	*right;
	struct s_tree	*left;
}			t_btree;

t_btree	*new_node(int value);

void	print_tree(t_btree *tree);

t_btree	*mirror_binary(const t_btree *tree);

void	print_tree_loop(t_btree *tree, int depth);

t_btree	*insert_number(t_btree *tree, int data);

t_btree	*search_number(t_btree *tree, int nb);

int	size_binary_tree(t_btree *tree);

#endif