#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 or the size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t lt_size, rt_size;

	if (!tree)
	{
		return (0);
	}

	lt_size = binary_tree_size(tree->left);
	rt_size = binary_tree_size(tree->right);
	return (1 + lt_size + rt_size);
}
