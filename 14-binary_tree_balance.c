#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
<<<<<<< HEAD
 * @tree: Pointer to the root node
 * Return: Height or 0 if NULL
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
=======
 * @tree: Pointer to the node to measure the height from
 * Return: Height of the tree from the given node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
>>>>>>> 6fc83fa46a0243b0aaa0b9b0e6638b96d3522c59
}

/**
 * binary_tree_balance - Measures the balance factor of a node
 * @tree: Pointer to the node to measure
 * Return: Balance factor or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
