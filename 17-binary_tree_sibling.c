#include "binary_trees.h"

/**
 * binary_tree_sibling - Checks if a node in a binary tree has a sibling
 * @node: A pointer to the node to check if it has a sibling
 *
 * Return: A pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
	{
		if (node->parent->right != NULL)
			return (node->parent->right);

		else
			return (NULL);
	}

	if (node->parent->left == NULL)
		return (NULL);

	return (node->parent->left);
}
