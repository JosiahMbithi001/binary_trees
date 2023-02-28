#include "binary_trees.h"

/**
 * binary_tree_node- A Function that Creates A Binary Tree Node
 * @parent: Parent as parent
 * @value: Key Value (n) of the node
 * Return: Pointer to the New Node on Success and NULL on Failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
