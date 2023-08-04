#include "treeNode.hpp"

treeNode::treeNode( listNode *_H1, listNode *_H2 ) : H1(_H1), H2(_H2), left(NULL), right(NULL) { } 
treeNode::treeNode( void ) : H1( NULL ), H2( NULL ), left( NULL ), right( NULL ) { } 

int	compareLists(listNode *HA, listNode *HB) {
	listNode	*headA;
	listNode	*headB;
	listNode	*hA;
	listNode	*hB;

	headA = hA = HA;
	headB = hB = HB;
	if ( hA && hB) {
		do {
			if ( hA->value > hB->value )
				return ( 1 );
			else if ( hA->value < hB->value )
				return ( 0 );
			hA = hA->next;
			hB = hB->next;
		} while ( hA != headA && hB != headB );
		if ( hA == headA && hB == headB )
			return ( 2 );
	} else if ( !hA && !hB )
		return ( 2 );
	return (( !hB ) ? 1 : 0);
}

treeNode	*compareNodes(treeNode *new_, treeNode *old, int *branch) {
	if (( *branch = compareLists(new_->H1, old->H1)) > 1 )
		*branch = compareLists(new_->H2, old->H2);
	if ( *branch == 2 )
		return ( NULL );
	if ( *branch == 0)
		return ( old->left );
	return ( old->right );
}

int	treeNode::storeNode(treeNode **treeHead, listNode *H1, listNode *H2) {
	treeNode	*newNode = new treeNode(H1, H2);
	treeNode	*current = *treeHead;
	treeNode	*next;
	int		branchFlag = 0;

	if ( current == NULL ) {
		*treeHead = newNode;
		return ( 0 );
	}
	while ( 1 ) {
		next = compareNodes(newNode, current, &branchFlag);
		if (branchFlag == 2)
			return (1);
		if ( next == NULL ) {
			if ( !branchFlag )
				current->left = newNode;
			else
				current->right = newNode;
			return ( 0 );
		}
		current = next;
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
