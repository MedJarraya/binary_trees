#include "binary_trees.h"

/**
 * binary_tree_is_root - is it root
 * @node: pointer to the node
 * Return: 0 fail 1 success
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
