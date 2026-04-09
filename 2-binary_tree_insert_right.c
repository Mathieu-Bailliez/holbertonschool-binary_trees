#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if the parent node exists */
	if (parent == NULL)
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize the new node */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	/* If the parent already has a right child */
	if (parent->right != NULL)
	{
		/* The new node takes the place of the old right child */
		new_node->right = parent->right;

		/* Update the parent pointer of the old right child */
		parent->right->parent = new_node;
	}
	else
	{
		/* If there was no right child */
		new_node->right = NULL;
	}

	/* Attach the new node as the right child of the parent */
	parent->right = new_node;

	/* Return the new node */
	return (new_node);
}
