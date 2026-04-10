#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node
 *
 * Return: pointer to the uncle node, or NULL if none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	/* Check if node or parent is NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Get parent and grandparent */
	parent = node->parent;
	grandparent = parent->parent;

	/* If grandparent does not exist, no uncle */
	if (grandparent == NULL)
		return (NULL);

	/* If parent is left child, uncle is right child */
	if (grandparent->left == parent)
		return (grandparent->right);

	/* Otherwise uncle is left child */
	return (grandparent->left);
}
