#include "binary_trees.h"
int max(int left, int right);

/**
 * tree_height - A Function that measures the Height of A Tree
 * @tree: A Pointer to the root node of the tree to measure the Height
 * Return: 0 If tree is NULL
 */

int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	return (0);

	left =  tree_height(tree->left);
	right = tree_height(tree->right);

	return (max(left, right) + 1);
}

/**
 * max -A Function that checks the max height between left & right
 * @left: Height of Left Node
 * @right: Height of right node
 * Return: Maximum Height
 */

int max(int left, int right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_balance -  A Function measuring the Balance of  A Binary Tree
 * @tree: Pointer to root Node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
