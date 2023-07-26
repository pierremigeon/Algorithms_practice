#include "graph_funcs.hpp"

graphNode::graphNode( graphNode &g ) {
	this->cacheHead = g.cache;
	this->shift = NULL;
	this->push = NULL;
	this->pop = NULL;
	this->H1 = copyList(g.H1);
	this->H2 = copyList(g.H2);
	performOperation(&this, this->H1, this->H2);
	this->isSorted = !check_sort(list, len);
}

graphNode::graphNode( int list[], int len ) {
	this->cacheHead = new treeNode(list, len);
	this->shift = NULL;
	this->push = NULL;
	this->pop = NULL;
	this->H1 = makeLinkedList(list, len);
	this->H2 = NULL;
	performOperation(&this, this->H1, this->H2);
	this->isSorted = !check_sort(list, len);
}

int	checkCache( graphNode &g ) {
	graphNode *head = &g.cacheHead;
	while ( head ) {
		if head->list = 
		
	}
}


void	graphify( g_node &g ) {
	if ( checkCache( g ) )
		return;
	while ( g.isSorted == 0 ) {
		g_node->shift = newGNode( g.H1, g.H2, 0 );
		graphify( g_node->shift );
		g_node->pop = newGNode( g.H1, g.H2, 1 );
		graphify( g_node->pop );
		g_node->push = newGNode( g.H1, g.H2, 2 );
		graphify( g_node->push );
	}
}

void	dijkstraMain( int list[], int len ) {
	graphNode *gHead = new graphNode(list, len);
	graphify(gHead);
}
