#include "graphNode.hpp"
#include "listNode.hpp"

treeNode	*graphNode::cacheHead;

graphNode::graphNode( graphNode &g, int operation ) {
	for ( int i = 0; i < 4; i++ )
		this->next[i] = NULL;
	this->H1 = listNode::copyList(g.H1);
	this->H2 = listNode::copyList(g.H2);
	if ( operation == 0 || operation == 1 )
		( operation == 0 ) ? listNode::shift(&this->H1) : listNode::shift(&this->H2);
	else
		( operation == 2 ) ? listNode::pushOrPop(&this->H2, &this->H1 ) \
			: listNode::pushOrPop(&this->H1, &this->H2);
	this->isSorted = listNode::checkSort(this->H1) && this->H2 == NULL;
}

graphNode::graphNode( int list[], int len ) {
	for ( int i = 0; i < 4; i++ )
		this->next[i] = NULL;
	this->H1 = listNode::makeLinkedList(list, len);
	this->H2 = NULL;
	this->del = treeNode::storeNode(&this->cacheHead, this->H1, this->H2);
	this->isSorted = check_sort(list, len);
}

void	printList( listNode *l1, listNode *l2 ) {
	listNode *h1 = l1;
	listNode *h2 = l2;
	int flag = 1;

	std::cout << "H1		H2" << std::endl;
	while ((l1 && (l1 != h1 || flag )) || ((l2 && (l2 != h2 || flag) )) ) {
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

listNode	*pop_stack(listNode **head ) {
	listNode	*out = *head;

	if ( *head )
		*head = (*head)->next;
	return ( out );
}

void	push_stack( listNode	**head, graphNode *g) {
	listNode	*add_to_stack = new listNode(g);

	add_to_stack->next = *head;
	*head = add_to_stack;
}

int	checkChange( graphNode *g, int operation) {
	if ( operation == 0 && ( g->H1 == NULL || g->H1->next == g->H1 ) )
		return ( 0 );
	if ( operation == 1 && ( g->H2 == NULL || g->H2->next == g->H2 ) )
		return ( 0 );
	if ( operation == 2 && g->H1 == NULL)
		return ( 0 );
	if ( operation == 3 && g->H2 == NULL)
		return ( 0 );
	return ( 1 );
}

void	operateList( listNode **H1, listNode **H2, int operation ) {
	if ( operation == 0 || operation == 1 )
		( operation == 0 ) ? listNode::shift(H1) : listNode::shift(H2);
	else
		( operation == 2 ) ? listNode::pushOrPop(H2, H1 ) \
			: listNode::pushOrPop(H1, H2);
}

int	checkUnique( graphNode *g, int operation ) {
	bool		del = 1;
	listNode 	*H1 = g->H1;
	listNode 	*H2 = g->H2;

	if ( g->isSorted )
		return ( 0 );
	operateList(&H1, &H2, operation);
	del = treeNode::storeNode(&graphNode::cacheHead, H1, H2);
	operateList(&H2, &H1, ( operation < 2 ) ? !operation : operation);
	return ( !del );
}

void	graphNode::graphify( graphNode *g ) {
	listNode	*stack_head = new listNode(g);
	listNode	*current;

	while (stack_head) {
		current = pop_stack(&stack_head);
		for ( int i = 0; i < 4; i++ ) {
			if ( checkChange(current->g, i) && checkUnique( current->g, i ) ) {
				current->g->next[i] = new graphNode ( *current->g, i );
				if ( !( current->g->next[i]->isSorted ) )
					push_stack( &stack_head, current->g->next[i] );
			}
		}		
	}
}

void	graphNode::graph( int list[], int len ) {
	graphNode *gHead = new graphNode(list, len);
	graphNode::graphify(gHead);
}
