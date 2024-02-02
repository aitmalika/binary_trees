#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as this right-child
 *                            of another in a binary tree
 * @parent: A pointer to this node to insert this right-child in
 * @value: this value to store in this new node
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to this new node
 *
 * Description: If parent already has a right-child, this new node
 *              takes its place and this old right-child is set as
 *              this right-child of this new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
