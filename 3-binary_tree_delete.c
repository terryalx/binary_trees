#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * if tree is NULL do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_tree = NULL, *right_tree = NULL;

	if (tree == NULL)
		return;
	if (tree->right != NULL)
		right_tree = tree->right;
	if (tree->left != NULL)
		left_tree = tree->left;
	free(tree);
	binary_tree_delete(right_tree);
	binary_tree_delete(left_tree);
}
