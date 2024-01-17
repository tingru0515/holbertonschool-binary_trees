#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
* Return: 0 or height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t r = 0;

		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((1 > r) ? 1 : r);
	}
	return (0);
}
