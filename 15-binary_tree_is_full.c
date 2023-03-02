#include "binary_trees.h"

/**
 * binary_tree_is_full - A Function that checks if a Tree is Full
 * @tree: A Pointer to the root node of the binary tree
 * Return: 0 if Tree is NULL
 */


int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}
