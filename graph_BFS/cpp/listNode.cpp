#include "listNode.hpp"

listNode::listNode( int _value ) : value(_value), g(NULL), next(NULL) { }
listNode::listNode( void ) : value(0), g(NULL), next(NULL) { }
listNode::listNode( graphNode *node ) : value(0), g( node ), next(NULL) { }

int	listNode::checkSort( listNode *head ) {
	listNode	*start = head;
	if ( head != NULL ) {
		do {
			if ( head->value > head->next->value )
				return (0);
			head = head->next;
		} while (head->next != start );
	}
	return (1);
}

listNode	*listNode::last( listNode *H ) {
	listNode *last = H;

	if ( H == NULL )
		return ( NULL );
	do {
		last = last->next;
	} while ( last->next != H );
	return last;
}

void    listNode::pushOrPop( listNode **l1Head, listNode **l2Head ) {
	listNode *last1 = last( *l1Head );
	listNode *last2 = last( *l2Head );

	if ( *l2Head == NULL )
		return;
	last2->next = (*l2Head)->next;
	(*l2Head)->next = (*l1Head) ? *l1Head : *l2Head;
	if ( last1 )
		last1->next = *l2Head;
	*l1Head = *l2Head;
	*l2Head = (last2 == *l2Head) ? NULL : last2->next;
}

void    listNode::shift( listNode **Head ) {
	if ( *Head != NULL )
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

listNode	*listNode::copyList( listNode *l ) {
	if ( l == NULL )
		return l;
	listNode	*head_original = l;
	listNode	*copy = NULL;
	listNode	*head_copy;

	do {
		if ( copy == NULL ) {
			copy = new listNode(l->value);
			copy->next = copy;
			head_copy = copy;
		}
		else 
			copy->next = new listNode(l->value);
		copy = copy->next;
		l = l->next;
		if ( l == head_original )
			copy->next = head_copy;
	} while ( l != head_original );
	return head_copy;
}

