#include "binary_trees.h"

/**
 * binary_tree_preorder - A Function into a binary tree in pre-order traversal
 * @root: A pointer to the root node of the tree to traverse
 * @func: A ponter to a function to call for each node i.e print in this case
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL)
		return;
	func(root->n);
	binary_tree_preorder(root->left, func);
	binary_tree_preorder(root->right, func);
}
