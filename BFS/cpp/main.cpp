#include <iostream>
#include "TreeNode.hpp"

int	main() {
	char	array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};	
	TreeNode	*head = TreeNode::newNode(array[0]);
	
	makeBinaryTree(array, sizeof(array) / sizeof(char), *head);
	printInOrder(head);

	return (0);
}

