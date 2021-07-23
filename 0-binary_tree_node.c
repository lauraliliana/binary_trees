#include "binary_trees.h"
/**
 * binary_tree_node - it inserts a new node
 * parent, with left and right nodes of new node having NULL value
 * @parent: parent node of new node in binary tree
 * @value: the value of the integer in the new node
 *
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t) * 1);
	if (node)
	{
		node->parent = parent;
		node->n = value;
		node->left = node->right = NULL;
	}
	return (node);
}
