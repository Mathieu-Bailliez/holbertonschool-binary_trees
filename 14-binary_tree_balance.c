#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	/* If tree is NULL return 0 */
	if (tree == NULL)
		return (0);

	/* Get height of left subtree */
	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;

	/* Get height of right subtree */
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
