#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node as a chold
 *
 * @parent: pointer to the node to insert the right-child
 * @value: the value to store in the new node
 *
 * Return: pointer of NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	if (parent)
	{
		tree = binary_tree_node(parent, value);
		if (tree)
		{
			if (parent->right)
			{
				tree->right = parent->right;
				parent->right->parent = tree;
			}
			parent->right = tree;
		}
	}

	return (tree);
}
