#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1 if perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lt, rt;

	if (!tree)
	{
		return (0);
	}

	lt = binary_tree_is_perfect(tree->left);
	rt = binary_tree_is_perfect(tree->right);

	if (lt && rt)
	{
		return (1);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
	{
		return (0);
	}
	return (0);
}


/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: int.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t ht_left = 0;
	size_t ht_right = 0;
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		ht_left += binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		ht_right += binary_tree_height(tree->right) + 1;
	}
	height = ht_left > ht_right ? ht_left : ht_right;

	return (height);
}
