#include "binary_trees.h"

/**
 * binary_tree_balance - function that
 * measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the balance factor
 * Return: 0 or the balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lt_balance;
	int rt_balance;

	if (!tree)
	{
		return (0);
	}

	lt_balance = binary_tree_height(tree->left);
	rt_balance = binary_tree_height(tree->right);

	if (tree->left)
	{
		lt_balance++;
	}
	if (tree->right)
	{
		rt_balance++;
	}

	return (lt_balance - rt_balance);
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
