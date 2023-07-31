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
	this->isSorted = listNode::checkSort(this->H1);
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

void	printList( listNode *l1, listNode *l2 ) {
	listNode *h1 = l1;
	listNode *h2 = l2;
	int flag = 1;

	std::cout << "H1		H2" << std::endl;
	while ((l1 && (l1 != h1 || flag )) || ((l2 && (l2->next != h2 || flag) )) ) {
		if (l1 && (l1 != h1 || flag ))
			std::cout << l1->value;
		else
			std::cout << "		";
		if (l2 && (l2 != h2 || flag ))
			std::cout << "		" << l2->value << std::endl;
		else
			std::cout << "  " << std::endl;
		if (l1 && (l1 != h1 || flag ))
			l1 = l1->next;
		if (l2 && (l2 != h2 || flag ))
			l2 = l2->next;
		flag = 0;
	}
}

void	graphNode::graphify( graphNode *g ) {
	//if ( checkCache( g ) )
	//	return;
	if ( g->isSorted == 0 ) {
		printList(g->H1, g->H2);
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
