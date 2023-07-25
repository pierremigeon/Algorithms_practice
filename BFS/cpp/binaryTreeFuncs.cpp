#include "BinaryTreeFuncs.hpp"

void	deleteTree( TreeNode *head ) {
	if ( head == NULL )
		return;
	deleteTree( head->left );
	deleteTree( head->right);
	delete head;
}

void	makeBinaryTree(char	array[], int size, TreeNode &head) {
	TreeNode *current = &head;
	TreeNode *last;

	for ( int i = 1; i < size; i++ ) {
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
