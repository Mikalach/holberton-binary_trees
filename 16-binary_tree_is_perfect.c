#include "binary_trees.h"

/**
 * countElem - count how many element would be in a tree of @height height
 * @size: size of the tree
 * @height: height of the tree
 * Return: 1 if logic, 0 if not
 */
int countElem(int size, int height)
{
	int a = 0, b = 1;

	while (b <= height)
	{
		a = (a * 2) + 1;
		b++;
		printf("%d\n", a);
	}
	if (a == size)
		return (1);
	return (0);
}
/**
 * binary_tree_is_perfect - check the if the tree is full
 * @tree: tree we need to check if is full
 * Return: 1 if full, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size;
	size_t height;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	return (countElem((int)size, (int)height));
}
