#include "binary_trees.h"

/**
<<<<<<< HEAD
 * binary_tree_postorder - Goes through a binary tree
 * using post-order traversal
=======
 * binary_tree_postorder - Goes through a binary tree using post-order traversal
>>>>>>> 6fc83fa46a0243b0aaa0b9b0e6638b96d3522c59
 * @tree: Pointer to the root node
 * @func: Function to call for each node’s value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
