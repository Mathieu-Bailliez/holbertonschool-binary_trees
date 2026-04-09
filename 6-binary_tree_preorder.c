#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or function is NULL */
	if (tree == NULL || func == NULL)
		return;

	/* Apply the function to the current node value */
	func(tree->n);

	/* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
