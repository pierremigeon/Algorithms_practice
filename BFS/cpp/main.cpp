#include "BFS.hpp"
#include "TreeNode.hpp"
#include "BinaryTreeFuncs.hpp"

int	main() {
	char	array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};	
	TreeNode	*head = TreeNode::newNode(array[0]);
	
	makeBinaryTree(array, sizeof(array) / sizeof(char), *head);
	printInOrder(head);

	std::cout << "~~~~~< *_BFS NEXT_* >~~~~~~~" << std::endl;

	return (0);
}

