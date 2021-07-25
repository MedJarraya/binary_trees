#include "binary_trees.h"

/**
 * binary_tree_height - tree height
 * @tree: pointer to the root node of the tree
 * Return: tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Lcount = 0;
	size_t Rcount = 0;

	if (tree)
	{
		Lcount = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		Rcount = tree->right ? binary_tree_height(tree->right) + 1 : 0;

		return (MAX(Lcount, Rcount));
	}

	return (0);
}

/**
 * binary_tree_size - tree size measure
 * @tree: pointer to the root node of the tree
 * Return: tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left)
				+ binary_tree_size(tree->right) + 1);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - check if the tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 perfect 0 not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t Height = binary_tree_height(tree) + 1;
	size_t Size = binary_tree_size(tree);
	size_t Result = 1;

	if (tree)
	{
		while (Height-- > 0)
			Result = Result * 2;
		Result -= 1;

		if (Result == Size)
			return (1);
	}
	return (0);
}
