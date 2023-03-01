#include "binary_trees.h"

/**
 * binary_tree_leaves - A Function that counts the Leaves of A Node
 * @tree: Pointer to root node of the Tree to count The Leaves
 * Return: 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (leaves + 1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
