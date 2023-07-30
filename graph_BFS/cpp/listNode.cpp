#include "listNode.hpp"

listNode::listNode( int _value, listNode *_next ) : value(_value), next(_next) { }
listNode::listNode( void ) : value(0), next(NULL) { }


int	listNode::checkSort( listNode *head ) {
	while ( head->next ) {
		if ( head->value > head->next->value )
			return (0);
	}
	return (1);
}

listNode	*listNode::last( listNode *H ) {
	listNode *last = H;

	if ( H == NULL )
		return ( NULL );
	while ( last->next != H )
		last = last->next;
	return last;
}

void    listNode::pushOrPop( listNode **l1Head, listNode **l2Head ) {
	listNode *last1 = last ( *l1Head );
	listNode *last2 = last ( *l2Head );

	if ( *l2Head == NULL )
		return;
	if ( last1 == NULL )
		last1 = *l2Head;
	last2->next = (*l2Head)->next;
	last1->next = *l2Head;
	(*l2Head)->next = *l1Head;
}

void    listNode::shift( listNode **Head ) {
	*Head = (*Head)->next;
}

listNode	*listNode::makeLinkedList(int list[], int len) {
	if ( len == 0 )
		return NULL;
	listNode	*head = new listNode( );
	listNode	*current = head;

	for ( int i = 0; i < len; i++ ) {
		current->value = list[i];
		current->next = new listNode();
		current = current->next;
	}
	current->next = head;
	return (head);
}

