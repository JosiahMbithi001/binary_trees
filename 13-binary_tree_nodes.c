#include "binary_trees.h"

/**
 * binary_tree_nodes - A Function that counts the nodes with at least 1 child
 * @tree: Pointer to the root node of the tree to count
 * Return: 0 if tre is NULL else Number of Nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left || tree->right)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
