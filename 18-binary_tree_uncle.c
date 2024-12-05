#include "binary_trees.h"

/**
 * binary_tree_uncle - Checks if a node in a binary tree has an uncle
 * @node: A pointer to the node to check if it has an uncle
 *
 * Return: A pointer to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);

		else
			return (NULL);
	}

	if (node->parent->parent->left == NULL)
		return (NULL);

	return (node->parent->parent->left);
}
