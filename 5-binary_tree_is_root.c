#include "binary_trees.h"

/**
 * binary_tree_is_root - check if node is root
 * @node: node to check
 * Return: 1 if too, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	binary_tree_t *nodeCopy;

	nodeCopy = node;
	if (nodeCopy)
		if (!nodeCopy->parent)
			return (1);
	return (0);
}
