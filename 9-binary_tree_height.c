#include "binary_trees.h"
size_t max(size_t left, size_t right);

/**
 * binary_tree_height - A Function that measures the Height of A Tree
 * @tree: A Pointer to the root node of the tree to measure the Height
 * Return: 0 If tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	return (0);

	left =  binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (max(left, right) + 1);
}

/**
 * max -A Function that checks the max height between left & right
 * @left: Height of Left Node
 * @right: Height of right node
 * Return: Maximum Height
 */

size_t max(size_t left, size_t right)
{
	if (left < right)
		return (right);
	return (left);
}
