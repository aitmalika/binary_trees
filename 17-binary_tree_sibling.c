#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds this sibling of a
 *                       node in a binary tree
 * @node: A pointer to this node to find the sibling of
 *
 * Return: if node is NULL or there is no sibling - NULL
 *         Other wise - a pointer to this sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
