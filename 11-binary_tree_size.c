#include "binary_trees.h"

/**
 * binary_tree_size- A Function measuring the size of a Binary Tree
 * @tree: A pointer to the root node of the tree to measure
 * Return: 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeleft = 0, sizeright = 0;

	if (tree == NULL)
		return (0);

	sizeleft = binary_tree_size(tree->left);
	sizeright = binary_tree_size(tree->right);

	return (sizeleft + sizeright + 1);
}
