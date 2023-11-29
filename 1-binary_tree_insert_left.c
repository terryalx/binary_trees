#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child
 * @parent: pointer to the node to insert the left child
 * @value: value to store in the left child
 *
 * Return: pointer to the left child || NULL on failure or parent is NULL
 * if parent already has a left child, replace with new node and set
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftchild;

	if (parent == NULL)
		return (NULL);

	leftchild = malloc(sizeof(binary_tree_t));

	if (leftchild == NULL)
		return (NULL);

	leftchild->parent = parent;
	leftchild->n = value;
	leftchild->left = parent->left;
	leftchild->right = NULL;
	parent->left = leftchild;

	if (leftchild->left)
	{
		leftchild->left->parent = leftchild;
	}

	return (leftchild);
}
