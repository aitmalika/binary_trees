#include "binary_trees.h"

/**
 * binary_tree_depth - measure this depth of a node in a binary tree
 * @tree: a pointer to this node to measure the depth
 *
 * Return: if tree is null, your functions must return 0, else return this depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
