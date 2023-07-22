#include <iostream>
#include "TreeNode.hpp"

struct node {
	TreeNode	*n;
	node		*next;
} node;


void	makeBinaryTree(char	array[], int size, TreeNode &head) {
	TreeNode *current = &head;
	TreeNode *last;

	for ( int i = 0; i < size; i++ ) {
		current = &head;
		while ( current ) {
			last = current;
			current = ( current->c > array[i] ) ? current->left : current->right;
		}
		last->left = ( last->c > array[i] ) ? new TreeNode(array[i]) : NULL;
		last->right = ( last->c <= array[i] ) ? new TreeNode(array[i]) : NULL;
	}
}

void	printInOrder( TreeNode *head ) {
	if ( head->left )
		printInOrder( head->left );
	std::cout << head->c << std::endl;
	if ( head->right )
		printInOrder( head->right );
}

/*
void	breadthFirstTranverse( TreeNode *head ) {
	node	*qHead = new node;
	node	*qTail = head;

	qhead->n = head;
	while ( qHead != NULL ) {
		std::cout << qHead->n->c << std::endl;
		qTail = 
	}
}
*/

int	main() {
	char	array[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};	
	TreeNode	*head = TreeNode::newNode(array[0]);
	
	makeBinaryTree(array, sizeof(array) / sizeof(char), *head);
	printInOrder(head);

	return (0);
}

