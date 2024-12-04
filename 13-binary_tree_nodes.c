#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * in a binary tree
 * @tree: A pointer to the root node to count
 *
 * Return: The number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;
	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	return (count + (binary_tree_nodes(tree->left) +
			 binary_tree_nodes(tree->right)));
}
