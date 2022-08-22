#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tempNode;

	tempNode = malloc(sizeof(binary_tree_t));
	if (tempNode == NULL)
	{
		return (NULL);
	}
	tempNode->n = value;
	tempNode->left = NULL;
	tempNode->right = NULL;

	tempNode->parent = parent;

	return (tempNode);
}
