#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree
 * @parent: parent of the new node created
 * @value: int to put in the node
 * Return: newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (!parent->left)
		parent->left = newNode;
	else
		parent->right = newNode;

	return (newNode);
}
