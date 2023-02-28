#include "binary_trees.h"

/**
 * binary_tree_insert_left- A fFunction that inserts value to the left
 * @parent: parent of the node
 * @value: Key value to be inserted in the Node
 * Return: Pointer of New Node on Succes and NULL on Failure & parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		oldnode = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = oldnode;
		oldnode->parent = parent->left;
	}
	return (parent->left);
}

