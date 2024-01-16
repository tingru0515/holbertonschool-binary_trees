#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct binary_tree_s - binary tree node
* @n: integer stored in the nodes
* @parent: pointer to the parent node
* @left: pointer to the left child node
* @right: pointer to the right child node
*/
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

/**
* struct levelorder_queue_s - level order traversal queue
* @node: a node of a binary tree
* @next: the next node to traverse to in the binary tree
*/
typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;

/* printing helper function */

/* task function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
