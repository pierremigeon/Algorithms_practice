#include "DFS.hpp"

int	main() {
	int length = 1;
	int	*list = generate_list(length);
	for ( int i = 0; i < length; i++ )
		std::cout << list[i] << std::endl;

	tNode	*head = new tNode(-1);

	makeBinaryTree(list, length, head);	

	tNode *head2 = new tNode(2);
	head2->left = new tNode(1);
	head2->right = new tNode(3);
	head2->left->left = new tNode(0);

	//int value = list[4];
	//DFS_inOrder(head, value);

	//std::cout << "\nPreorder: " << std::endl;
	//preOrder(head);
	std::cout << "\nInorder: " << std::endl;
	inOrder(head2);
	std::cout << "\nInorder iterative: " << std::endl;
	inOrder_it(head2);
	//std::cout << "\nPostorder: " << std::endl;
	//postOrder(head);	

	return (0);
}
