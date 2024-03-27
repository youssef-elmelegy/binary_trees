#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root of the tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a root, 0 otherwise or if node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}

