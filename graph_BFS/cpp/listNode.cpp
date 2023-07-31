#include "listNode.hpp"

listNode::listNode( int _value ) : value(_value), next(NULL) { }
listNode::listNode( void ) : value(0), next(NULL) { }


int	listNode::checkSort( listNode *head ) {
	listNode	*start = head;

	while ( head->next != start ) {
		if ( head->value > head->next->value )
			return (0);
		head = head->next;
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
	listNode *last1 = last( *l1Head );
	listNode *last2 = last( *l2Head );

	if ( *l2Head == NULL )
		return;
	last2->next = (*l2Head)->next;
	if ( last1 ) { 
		last1->next = *l2Head;
		(*l2Head)->next = *l1Head;
	} else {
		*l1Head = *l2Head;
		(*l2Head)->next = *l2Head;
	}
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
		current->next = (i == len - 1) ? head : new listNode();
		current = current->next;
	}
	return (head);
}

