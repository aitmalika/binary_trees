#include "binary_trees.h"

/**
 * binary_tree_size - Measures this size of a binary tree
 * @tree: a pointer to this root node of the tree to measure the size of
 *
 * Return: this size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
