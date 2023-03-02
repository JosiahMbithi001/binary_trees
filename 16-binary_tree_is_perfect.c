#include "binary_trees.h"


/**
 * tree_is_full - A Function that checks if a Tree is Full
 * @tree: A Pointer to the root node of the binary tree
 * Return: 0 if Tree is NULL
 */


int tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (tree_is_full(tree->left) & tree_is_full(tree->right));
}

int max(int left, int right);

/**
 * tree_height - A Function that measures the Height of A Tree
 * @tree: A Pointer to the root node of the tree to measure the Height
 * Return: 0 If tree is NULL
 */

int tree_height(const binary_tree_t *tree)
{
	int left, right, max;

	if (tree == NULL)
	return (0);

	left =  tree_height(tree->left);
	right = tree_height(tree->right);
	if (left < right)
		max = right;
	else
		max = left;
	return (max + 1);
}

/**
 * tree_balance -  A Function measuring the Balance of  A Binary Tree
 * @tree: Pointer to root Node of the tree
 * Return: 0 if tree is NULL
 */
int tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_height(tree->left) - tree_height(tree->right));
}
/**
 * binary_tree_is_perfect - A Function checking if Binary Tree is Perfect
 * @tree: A Pointer to the root node of the Binary Tree
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	if (left != right)
		return (0);
	if (!tree_balance(tree) && tree_is_full(tree))
		return (1);
	return (0);
}
