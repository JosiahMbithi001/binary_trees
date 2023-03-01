#include "binary_trees.h"

/**
 * binary_tree_postorder - A Function into a binarytree in post-order traversal
 * @root: A pointer to the root node of the tree to traverse
 * @func: A ponter to a function to call for each node i.e print in this case
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *root, void (*func)(int))
{
	if (root == NULL)
		return;
	binary_tree_postorder(root->left, func);
	binary_tree_postorder(root->right, func);
	func(root->n);
}
