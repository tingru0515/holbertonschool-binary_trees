#include "binary_trees.h"
/**
* _height - measure the height of a binary tree
* @tree: pointer to the node to measure the height
* Return: the height of the tree starting at node
*/
size_t _height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	height_l = tree->left ? 1 + _height(tree->left) : 0;
	height_r = tree->right ? 1 + _height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: a pointer to the root node of the tree to measure the height
* Return: 0 or height
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
		return (0);

	height = _height(tree);

	return (height);
}
