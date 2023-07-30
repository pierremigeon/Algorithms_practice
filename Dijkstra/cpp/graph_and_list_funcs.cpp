#include "graph_and_list_funcs.cpp"

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

g_node	*newGNode( l_node *H1, l_node *H2, int operation ) {
	g_node *fresh = new g_node;
	l_node *newH1 = copyList(&H1);
	l_node *newH2 = copyList(&H2);

	(*function[operation])(&H1, &H2);


	fresh->shift = NULL;
	fresh->push = NULL;
	fresh->pop = NULL;
	fresh->H1 = H1;
	fresh->H2 = H2;
	return ( fresh );
}

void	graphify( g_node &g ) {
	while ( g.isSorted == 0 ) {
		g_node->shift = newGNode( g.H1, g.H2, 0 );
		graphify( g_node->shift );
		g_node->pop = newGNode( g.H1, g.H2, 1 );
		graphify( g_node->pop );
		g_node->push = newGNode( g.H1, g.H2, 2 );
		graphify( g_node->push );
	}
}

g_node	&initHead( int list[], int len ) {
	g_node *head = new g_node;
	
	head->isSorted = !check_sort(list, len);
	head->H1 = makeLinkedList(list, len);
	head->H2 = NULL;
	head->shift = NULL;
	head->pop = NULL;
	head->push = NULL;
	return ( head );
}

int[]	dijkstraShortestPath(g_node &head) {

}

void	dijkstraMain( int list[], int len ) {
	g_node &gHead = initHead(list, len);
	graphify(gHead);
	sortFromCommands(dijkstraShortestPath(gHead), list);
}
