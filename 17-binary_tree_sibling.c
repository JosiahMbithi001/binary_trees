#include "binary_trees.h"

/**
 * binary_tree_sibling - A Function that checks the sibling of a node
 * @node: A Pointer to the node to find the sibling
 *
 * Return: pointer to sibling node or NULL or otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left && node->parent->left != NULL)
		return (node->parent->left);

	if (node->parent->right && node->parent->right != NULL)
		return (node->parent->right);

	return (NULL);
}
