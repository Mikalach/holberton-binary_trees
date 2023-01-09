#include "binary_trees.h"

/**
 * binary_tree_height - check the tree height
 * @tree: tree we need to check the height of
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int i;
	binary_tree_t copyNode;

	if (!tree)
		return (0);


	copyNode = tree;
	for (i = 1 ; !copyNode ; i++)
		copyNode = copyNode->left;

	return (i);
}
