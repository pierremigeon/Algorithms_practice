#include <iostream>
#include "TreeNode.hpp"

struct node {
	TreeNode	*n;
	node		*next;
	node		*last;
} node;

void	newQNode( TreeNode *t, node **head, node **tail ) {
	if ( t == NULL )
		return;
	node	*out = new node;
	out->n = t;
	out->next = *tail;
	out->last = NULL; 
	*tail = out;
}

void	breadthFirstTranverse( TreeNode *head ) {
	node	*qHead;
	node	*qTail = NULL;
	
	qHead->n = head;
	qHead->next = NULL;
	newQNode(head, qHead, qTail);
	qHead->last = qTail;
	while ( qHead != NULL ) {
		std::cout << qHead->n->c << std::endl;
		newQNode(head->left);
		newQNode(head->right);
		head = head->last;
	}
}
