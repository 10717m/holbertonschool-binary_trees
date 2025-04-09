#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in the tree
 * @tree: Pointer to the node to measure depth
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
