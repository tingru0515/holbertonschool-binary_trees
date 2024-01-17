#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: a pointer to the root node of the tree to measure the balance factor
* Return: 0 or balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}

/**
* binary_tree_height - measure the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
* Return: 0 or return height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t r = 0;

		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((1 > r) ? 1 : r);
	}
	return (0);
}
