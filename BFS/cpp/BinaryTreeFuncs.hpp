#ifndef BINARYTREE_H
# define BINARYTREE_H
#include <iostream>
#include "TreeNode.hpp"

void    deleteTree( TreeNode *head );
void	makeBinaryTree(char	array[], int size, TreeNode &head);
void	printInOrder( TreeNode *head );

#endif
