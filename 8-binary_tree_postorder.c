#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or function is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Apply the function to the current node value */
	func(tree->n);
}
