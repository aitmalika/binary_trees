#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tres
 * @parent: A pointer to this node to insert this left-child in.
 * @value: this value to store in this new node
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to this new node
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and this old left-child is set as
 *              this left-child of this new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
