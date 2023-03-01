#include "binary_trees.h"

/**
 * binary_tree_inorder - A Function into a binary tree in in-order traversal
 * @root: A pointer to the root node of the tree to traverse
 * @func: A ponter to a function to call for each node i.e print in this case
 * Return: Nothing
 */

void binary_tree_inorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL)
		return;
	binary_tree_inorder(root->left, func);
	func(root->n);
	binary_tree_inorder(root->right, func);
}
