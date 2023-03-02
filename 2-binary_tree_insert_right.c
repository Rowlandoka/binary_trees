#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert right node in tree
 * @parent: pointer to parent
 * @value: value of new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *temp;

if (!(parent))
return (NULL);

temp = malloc(sizeof(binary_tree_t));

if (!(temp))
return (NULL);

temp->n = value;
temp->parent = parent;
temp->left = NULL;
temp->right = NULL;

if (!(parent->right))
{
parent->right = temp;
}
else
{
parent->right->parent = temp;
temp->right = parent->right;
parent->right = temp;
}
return (temp);
}
