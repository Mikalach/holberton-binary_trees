#include "binary_trees.h"

/**
 * binary_tree_depth - check the node depth
 * @tree: tree we need to check the height of
 * Return: depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i;
	binary_tree_t *copyNode = (binary_tree_t *)tree;

	if (!tree)
		return (0);

	for (i = 1 ; !copyNode ; i++)
		copyNode = copyNode->parent;

	return (i);
}
