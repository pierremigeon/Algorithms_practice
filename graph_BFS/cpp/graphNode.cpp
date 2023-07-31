#include "graphNode.hpp"
#include "listNode.hpp"

listNode	*graphNode::copyList( listNode *l ) {
	if ( l == NULL )
		return l;
	listNode	*head_original = l;
	listNode	*copy = new listNode(l->value);
	listNode	*head_copy = copy;

	l = l->next;
	while ( l != head_original ) {
		copy->next = new listNode(l->value);
		copy = copy->next;
		l = l->next;
		if ( l == head_original )
			copy->next = head_copy;
	}
	return copy->next;
}

graphNode::graphNode( graphNode &g, int operation ) {
	//this->cacheHead = g.cache;
	this->shift = NULL;
	this->push = NULL;
	this->pop = NULL;
	this->H1 = copyList(g.H1);
	this->H2 = copyList(g.H2);
	if ( operation == 0 )
		listNode::shift(&this->H1);
	else
		( operation == 1 ) ? listNode::pushOrPop(&this->H2, &this->H1 ) \
			: listNode::pushOrPop(&this->H1, &this->H2);
	this->isSorted = !listNode::checkSort(this->H1);
}

graphNode::graphNode( int list[], int len ) {
	//this->cacheHead = new treeNode(list, len);
	this->shift = NULL;
	this->push = NULL;
	this->pop = NULL;
	this->H1 = listNode::makeLinkedList(list, len);
	this->H2 = NULL;
	this->isSorted = check_sort(list, len);
}

/*
int	checkCache( graphNode &g ) {
	graphNode *head = &g.cacheHead;
	while ( head ) {
		if head->list = 
		
		head = ( )
	}
}
*/

void	graphNode::graphify( graphNode *g ) {
	//if ( checkCache( g ) )
	//	return;
	while ( g->isSorted == 0 ) {
		g->shift = new graphNode(*g, 0);
		graphify( g->shift );
		g->pop = new graphNode(*g, 1);;
		graphify( g->pop );
		g->push = new graphNode(*g, 2);
		graphify( g->push );
	}
}

void	graphNode::graph( int list[], int len ) {
	graphNode *gHead = new graphNode(list, len);
	graphNode::graphify(gHead);
}
