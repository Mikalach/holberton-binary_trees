#include "binary_trees.h"

/**
 * search - search in the child for existing branch
 * @tree: branch to check
 * @i: counter
 */
void search(size_t *i, const binary_tree_t *tree)
{
	(*i)++;
	if (tree->left)
		search(i, tree->left);
	else if (tree->right)
		search(i, tree->right);
}

/**
 * binary_tree_height - check the tree height
 * @tree: tree we need to check the height of
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0;
	size_t *iptr = &i;

	if (!tree)
		return (0);

	search(iptr, tree);
	return (i);
}
