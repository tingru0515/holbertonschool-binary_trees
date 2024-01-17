#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node in a binary tree
* @node: a pointer to the node to find the sibling of
* Return: NULL or a pointer
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
