#include "binary_trees.h"

/**
 * bst_insert - Inserts a node in a Binary Search Tree
 * @tree: A pointer to the pointer to the root node of the BST
 * @value: A value to store in the inserted node
 *
 * Return: A pointer to the inserted node.
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *current;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	current = *tree;
	while (current != NULL)
	{
		parent = current;

		if (value < current->n)
		{
			current = current->left;
			if (current == NULL)
			{
				new_node = binary_tree_node(parent, value)
				parent->left = new_node;
				return (new_node);
			}
		}
		else if (value > current->n)
		{
			current = current->right;
			if (current == NULL)
			{
				new_node = binary_tree_node(parent, value)
				parent->right = new_node;
				return (new_node);
			}
		}
		else
			return (NULL);
	}
	return (NULL);
}
