#include "binary_trees.h"

/**
 * searchForPerfect - search in the child for holes
 * @i: counter
 * @count: another counter
 * @tree: tree to check
 */
void searchForPerfect(int *i, const binary_tree_t *tree, int *count)
{
	*count = *count + 1;
	if ((*i) == 1 && tree->left)
	{
		if (!tree->right)
			(*i) = 0;
		else
			searchForPerfect(i, tree->left, count);
	}

	if ((*i) == 1 && tree->right)
	{
		if (!tree->left)
			(*i) = 0;
		else
			searchForPerfect(i, tree->right, count);
	}
}

/**
 * binary_tree_is_perfect - check the if the tree is full
 * @tree: tree we need to check if is full
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 1;
	int *iptr = &i;
	int count = 0;
	int *countptr = &count;

	if (!tree)
		return (0);

	searchForPerfect(iptr, tree, countptr);

	if (count != 1 && count % 2 != 0)
		return (0);
	return (i);
}
