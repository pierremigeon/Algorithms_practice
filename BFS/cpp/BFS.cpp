#include "BFS.hpp"

void	newQNode( TreeNode *t, qNode **tail ) {
	if ( t == NULL )
		return;

	qNode	*out = new qNode;

	out->n = t;
	out->next = *tail;
	out->last = NULL; 
	*tail = out;
}

void	breadthFirstTranverse( TreeNode *head ) {
	qNode	*qHead;
	qNode	*qTail = NULL;

	newQNode(head, &qHead);
	qHead->last = qTail;
	while ( qHead != NULL ) {
		std::cout << qHead->n->c << std::endl;
		newQNode(head->left, &qTail);
		newQNode(head->right, &qTail);
		qHead = qHead->last;
	}
}
