#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through a binary tree using
 * levelorder traversal
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_levelorder(tree->left, func);
	func(tree->n);
	binary_tree_levelorder(tree->right, func);
}
