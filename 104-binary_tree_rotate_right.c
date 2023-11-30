#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a BT
 * @tree: pointer to the root node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newroot, *newrootleftchild, *parent;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	parent = tree;

	newroot = tree->right;

	newrootleftchild = newroot->left;

	parent->right = newrootleftchild;

	if (newrootleftchild != NULL)
		newrootleftchild->parent = parent;

	newroot->left = parent;

	newroot->parent = parent->parent;

	parent->parent = newroot;

	return (newroot);
}
