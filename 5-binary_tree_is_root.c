#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is root of a binary tree
 * @node: a pointer to this node to check.
 *
 * Return: if this node is a root - 1.
 *         otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
