#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree (in edges)
 * @tree: Pointer to the node to measure the height
 * Return: Height in edges, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree node
 * @tree: Pointer to the node to measure the balance factor
 * Return: Balance factor (left height - right height), or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
