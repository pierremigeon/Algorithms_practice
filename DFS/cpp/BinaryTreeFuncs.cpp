#include "BinaryTreeFuncs.hpp"

void	deleteTree( tNode *head ) {
	if ( head == NULL )
		return;
	deleteTree( head->left );
	deleteTree( head->right);
	delete head;
}

void	makeBinaryTree(int array[], int size, tNode *head) {
	tNode *current = head;
	tNode *last;

	for ( int i = 0; i < size; i++ ) {
		current = head;
		while ( current ) {
			last = current;
			current = ( current->value > array[i] ) ? current->left : current->right;
		}
		last->left = ( last->value > array[i] ) ? new tNode(array[i]) : NULL;
		last->right = ( last->value <= array[i] ) ? new tNode(array[i]) : NULL;
	}
}

void	makeBinaryTree(char	array[], int size, tNode &head) {
	tNode *current = &head;
	tNode *last;

	for ( int i = 1; i < size; i++ ) {
		current = &head;
		while ( current ) {
			last = current;
			current = ( current->value > array[i] ) ? current->left : current->right;
		}
		last->left = ( last->value > array[i] ) ? new tNode(array[i]) : NULL;
		last->right = ( last->value <= array[i] ) ? new tNode(array[i]) : NULL;
	}
}

void	printInOrder( tNode *head ) {
	if ( head->left )
		printInOrder( head->left );
	std::cout << head->value << std::endl;
	if ( head->right )
		printInOrder( head->right );
}
