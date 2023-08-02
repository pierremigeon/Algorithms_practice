#include "treeNode.hpp"

treeNode::treeNode( listNode *_H1, listNode *_H2 ) : H1(_H1), H2(_H2), left(NULL), right(NULL) { } 
treeNode::treeNode( void ) : H1( NULL ), H2( NULL ), left( NULL ), right( NULL ) { } 

int	compareLists(treeNode *new, treeNode *old) {
	listNode	*head1;
	listNode	*head2;
	listNode	*h1;
	listNode	*h2;

	head1 = h1 = new->H1;
	head2 = h2 = old->H1;
	if ( new->H1 && old->H1) {
		do {
			

		} while ( h1 != head1 && h2 != head2);
	}
	if ( h1 && h1 == head1 || h2 && h2 != head2 )
		return ( );
	
}

treeNode	*compareNodes(treeNode *new, treeNode *old) {
	if ( compareLists() )


}


treeNode::storeNode(treeNode &cache_head, listNode *H1, listNode *H2) {
	treeNode	newNode = new treeNode(H1, H2);
	
	while ( ) {
		current = compareNodes(new, current)

	}
	
}




/*

treeNode::treeNode( int _list[], int _len) : list(_list), len(_len) { }

treeNode	*treeNode::getLeft( void ) const {
	return this->left;
}

treeNode	*treeNode::getRight( void ) const {
	return this->right;
}

int		*treeNode::getlist( void ) const {
	return this->list;
}

int		treeNode::getInt( void ) const {
	return this->len;
}

void	treeNode::setLeft(treeNode *target) {
	this->left = target;
}

void	treeNode::setRight(treeNode *target) {
	this->right = target;
}

*/
