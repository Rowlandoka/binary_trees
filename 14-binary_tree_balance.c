#include "binary_trees.h"
/**
 * height - returns height
 * @tree: node to start
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = height(tree->left);
	right_height = height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
 * binary_tree_balance - finds balance of tree at root
 * @tree: root node
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side, right_side, balance;

	if (tree == NULL)
		return (0);
	left_side = height(tree->left);
	right_side = height(tree->right);
	balance = left_side - right_side;
	return (balance);
}
