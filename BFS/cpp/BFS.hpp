#ifndef QUEUE_H
# define QUEUE_H
#include <iostream>
#include "TreeNode.hpp"

struct qNode {
	TreeNode	*n;
	qNode		*next;
	qNode		*last;
};

void	newQNode( TreeNode *t, qNode **tail );
void	breadthFirstTranverse( TreeNode *head );

#endif
