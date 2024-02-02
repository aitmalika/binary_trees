#include "binary_trees.h"

/**
 * binary_tree_inorder - Go through a binary tree using in-order traversal.
 * @tree: a pointer to this root node of this tree to travers
 * @func: a pointer to function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
