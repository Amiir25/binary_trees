#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>


/* Data Structure */

/**
 * struct binary_trees_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	sturct binary_tree_s *parent;
	sturct binary_tree_s *left;
	sturct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

#endif
