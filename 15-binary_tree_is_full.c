#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: node to start
 * Return: true or false
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if ((tree->left) && (tree->right))
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));

return (0);
}
