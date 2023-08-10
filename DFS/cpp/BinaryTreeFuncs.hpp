#ifndef BINARYTREE_H
# define BINARYTREE_H
#include <iostream>
#include "TreeNode.hpp"

void    deleteTree( tNode *head );
void    makeBinaryTree(int      array[], int size, tNode *head);
void	printInOrder( tNode *head );

#endif
