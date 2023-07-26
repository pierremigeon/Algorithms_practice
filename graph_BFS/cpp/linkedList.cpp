#include "linkedList.hpp"

l_node	*last( l_node *H ) {
	l_node last = H;

	if ( H == NULL )
		return NULL;
	while ( last->next != H )
		last = last->next;
	return last;
}

void    pushOrPop(l_node **l1Head, l_node **l2Head) {
	l_node *last1 = last( *l1Head);
	l_node *last2 = last( *l2Head );

	if ( *l2Head == NULL )
		return;
	if ( last1 == NULL )
		last1 = *l2Head;
	last2->next = *l2Head->next;
	last1->next = *l2Head;
	*l2Head->next = *l1head;
}

void    shift(node **Head) {
	*Head = *Head->next;
}
