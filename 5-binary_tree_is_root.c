#include "binary_trees.h"

/**
 * binary_tree_is_root - A Function that Checks if a node is A root
 * @node: Pointer to the node to check
 * Return: 1 if node is a root and 0 if node is not root or node is null
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
