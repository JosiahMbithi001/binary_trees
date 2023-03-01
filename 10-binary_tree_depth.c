#include "binary_trees.h"

/**
 * binary_tree_depth - A Function that finds the Depth of A Node
 * @tree: A pointer to the node to measure the Depth
 * Return: 0 If tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
