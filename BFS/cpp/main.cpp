#include "BFS.hpp"
#include "TreeNode.hpp"
#include "BinaryTreeFuncs.hpp"

int	main() {
	char	array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};	
	TreeNode	*head = TreeNode::newNode(array[0]);
	
	makeBinaryTree(array, sizeof(array) / sizeof(char), *head);
	printInOrder(head);

	std::cout << "~~~~~< *_BFS NEXT_* >~~~~~~~" << std::endl;
	breadthFirstTranverse(head);


	std::cout << "~~~~~< *_ARRAY2_* >~~~~~~~" << std::endl;
	char array2[] = {'a', 'f', 'c', 'b', 'a', 'x', 'l'};
	makeBinaryTree(array2, sizeof(array2) / sizeof(char), *head);
	printInOrder(head);

	std::cout << "~~~~~< *_ARRAY2_BFT_* >~~~~~~~" << std::endl;	
	breadthFirstTranverse(head);

	return (0);
}

