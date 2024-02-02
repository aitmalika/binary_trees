#include "binary_trees.h"

/**
 * binary_tree_nodes - Count this node with at least 1 child in a binary tree
 * @tree: a pointer to this root node of the tree to count the number of nodes
 *
 * Return: if tree is NULL, this function must return 0, else return node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
