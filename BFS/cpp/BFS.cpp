#include "BFS.hpp"

void	newQNode( TreeNode *t, qNode **tail ) {
	if ( t == NULL )
		return;

	qNode	*out = new qNode;
	out->n = t;
	out->next = *tail;
	out->last = NULL; 
	if (*tail)
		(*tail)->last = out;
	*tail = out;
}

int	sizeOfQueue( qNode *qHead ) {
	int	x = 0;

	while (qHead) {
		++x;
		qHead = qHead->last;
	}
	return (x);
}

void	breadthFirstTranverse( TreeNode *head ) {
	qNode	*qHead = NULL;
	qNode	*qTail = NULL;
	int	q_len = 0;

	newQNode(head, &qHead);
	qTail = qHead;
	while ( qHead != NULL ) {
		std::cout << qHead->n->c;
		if ( q_len == 0 ) {
			std::cout << "" << std::endl;
			q_len = sizeOfQueue(qHead);
		}
		newQNode(qHead->n->left, &qTail);
		newQNode(qHead->n->right, &qTail);
		qHead = qHead->last;
		q_len--;
	}
}
