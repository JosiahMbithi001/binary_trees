#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A Function that Checks if a node is A Leaf
 * @node: Pointer to the node to check
 * Return: 1 if a leaf and 0 if node is not leaf or node is null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left  && !node->right)
		return (1);
	return (0);
}
