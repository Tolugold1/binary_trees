#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: 0 or number of left
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lt = 0;
	size_t rt = 0;

	if (!tree)
	{
		return (0);
	}

	rt += binary_tree_leaves(tree->right);
	lt += binary_tree_leaves(tree->left);
	if (!tree->left && !tree->right)
	{
		return (rt + lt + 1);
	}
	return (lt + rt);
}
