#include "TreeNode.hpp"
#include "list_funcs.hpp"
#include "BinaryTreeFuncs.hpp"

void	postOrder(tNode *head) {
	if ( head == NULL )
		return ;
	postOrder(head->left);
	postOrder(head->right);
	std::cout << head->value << std::endl;
}

void	inOrder(tNode *head) {
	if ( head == NULL )
		return ;
	inOrder(head->left);
	std::cout << head->value << std::endl;
	inOrder(head->right);
}

void	preOrder(tNode *head) {
	if ( head == NULL )
		return ;
	std::cout << head->value << std::endl;
	preOrder(head->left);
	preOrder(head->right);
}

void	DFS_inOrder(tNode *head, int query) {
	if ( head == NULL )
		return ;
	if ( head->value == query )
		std::cout << "Query: " << query <<  " was found in the tree using DFS" << std::endl;
	if ( head->left != NULL )
		DFS_inOrder(head->left, query);
	std::cout << head->value << std::endl;
	if ( head->right != NULL )
		DFS_inOrder(head->right, query);
}

int	main() {
	int length = 5;
	int	*list = generate_list(length);
	for ( int i = 0; i < length; i++ )
		std::cout << list[i] << std::endl;

	tNode	*head = new tNode(-1);

	makeBinaryTree(list, length, head);	

	int value = list[4];
	DFS_inOrder(head, value);

	std::cout << "\nPreorder: " << std::endl;
	preOrder(head);
	std::cout << "\nInorder: " << std::endl;
	inOrder(head);
	std::cout << "\nPostorder: " << std::endl;
	postOrder(head);	

	return (0);
}
