#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using inorder traversal
 * @tree: A pointer to the root node of the tree
 * @func: A pointer to a function to call for each node
 *
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
