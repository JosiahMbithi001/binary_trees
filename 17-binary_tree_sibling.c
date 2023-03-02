#include "binary_trees.h"

/**
 * binary_tree_sibling - A Function that checks the sibling of a node
 * @node: A Pointer to the node to find the sibling
 *
 * Return: pointer to sibling node or NULL or otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == NULL)
		temp = node->parent->right;
	else
		temp = node->parent->left;

	if (temp == NULL)
		return (NULL);

	return (temp);
}
