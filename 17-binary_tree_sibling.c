#include "binary_trees.h"

/**
 * binary_tree_sibling - A Function that checks the sibling of a node
 * @node: A Pointer to the node to find the sibling
 * Return: NULL if node or parent is NULL or if node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->left != NULL)
		return (node->parent->left);

	return (node->parent->right);
}
