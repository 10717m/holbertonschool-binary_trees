#include "binary_trees.h"
#include <math.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the node
 * Return: Height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the node
 * Return: Total number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (
		1 +
		binary_tree_size(tree->left) +
		binary_tree_size(tree->right)
	);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, expected_size, actual_size;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	expected_size = (1 << (height + 1)) - 1;
	actual_size = binary_tree_size(tree);

	return (expected_size == actual_size);
}
