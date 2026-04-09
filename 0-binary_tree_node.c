#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: value to store in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(binary_tree_t));

	/* Check if memory allocation failed */
	if (new_node == NULL)
		return (NULL);

	/* Initialize the node value */
	new_node->n = value;

	/* Set the parent pointer */
	new_node->parent = parent;

	/* Initialize children pointers to NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return the created node */
	return (new_node);
}
