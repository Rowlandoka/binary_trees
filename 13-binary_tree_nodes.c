#include "binary_trees.h"
/**
 * binary_tree_nodes - count the nodes
 * @tree: node to start from
 * Return: count of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t right_nodes;
size_t left_nodes;
size_t nodes = 0;

if (tree == NULL)
return (0);
if (tree->left || tree->right)
nodes++;
left_nodes = binary_tree_nodes(tree->left);
right_nodes = binary_tree_nodes(tree->right);
nodes += (left_nodes + right_nodes);

return (nodes);
}
