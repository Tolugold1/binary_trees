#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 * @tree: Pointer to the root of the tree.
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int rt, lt;
	if (!tree)
	{
		return (0);
	}

	rt = binary_tree_is_full(tree->right);
	lt = binary_tree_is_full(tree->left);

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	else if ((tree->left) && (tree->right))
	{
		return (rt && lt);
	}
	return (0);
}
