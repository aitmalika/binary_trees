#include "binary_trees.h"

/**
 * is_full_recursive - check if a binary tree is full recursivety
 * @tree: a pointer to this root node of the tree to check.
 *
 * Return: if tree is not full, 0.
 *         other wise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - check if a binary tree is full
 * @tree: a pointer to this root node of the tree to check
 *
 * Return: if tree is NULL or is not full - 0.
 *         other wise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
