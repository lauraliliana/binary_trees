#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts new node into left child of parent
 * @parent: the parent node to add a node to
 * @value: to be given to the new node
 *
 * Return: a pointer to new_node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *left_node;

	if (parent)
	{
		left_node = parent->left;
		node = malloc(sizeof(binary_tree_t) * 1);

		if (node)
		{
			node->parent = parent;
			node->n = value;
			node->right = NULL;
			node->left = left_node;
			if (left_node)
				left_node->parent = node;
		}
		parent->left = node;
	}
	else
		node = NULL;
	return (node);
}
