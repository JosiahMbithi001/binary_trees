#include "binary_trees.h"

/**
 * binary_tree_insert_right- A function that inserts value to the left
 * @parent: parent of the node
 * @value: Key value to be inserted in the Node
 * Return: Pointer of New Node on Succes and NULL on Failure & parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *oldnode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		oldnode = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = oldnode;
		oldnode->parent = parent->right;
	}
	return (parent->right);
}

