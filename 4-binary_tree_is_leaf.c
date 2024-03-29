#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf of a binary tree
 * @node: a pointer to this node to check
 *
 * Return: if this node is a leaf - 1.
 *         other wise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
