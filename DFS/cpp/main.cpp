#include "TreeNode.hpp"
#include "list_funcs.hpp"
#include "BinaryTreeFuncs.hpp"


void	DFS(tNode *head, int query) {
	if ( head == NULL )
		return ;
	if ( head->value == query )
		std::cout << "Query was found in the tree using DFS";
	if ( head->left != NULL )
		DFS(head->left);
	std::cout << head->value << std::endl;
	if ( head->right != NULL )
		DFS(head->right);
}

int	main() {
	int length = 5;
	int	*list = generate_list(length);

	tNode	*head = new tNode(-1);

	makeBinaryTree(list, length, head);	

	int value = 6;
	std::cout << DFS(head, value) << std::endl;

	
	return (0);
}
