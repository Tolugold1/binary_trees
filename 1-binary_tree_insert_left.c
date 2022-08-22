#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);
	if (!newNode)
	{
		return (NULL);
	}

	if (value < parent->n)
	{
		if (parent->left)
		{
			parent->left->parent = newNode;
			newNode->left = parent->left;
		}
		parent->left = newNode;
	}
	return (newNode);
}
