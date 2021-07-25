#include "binary_trees.h"

/**
 * binary_tree_depth -tree depth
 *
 * @tree: pointer to the node
 * Return: tree depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dpth = 0;

	if (tree)
	{
		for (; tree->parent; dpth++)
			tree = tree->parent;
	}
	return (dpth);
}
