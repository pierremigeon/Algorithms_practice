#ifndef TREENODE_H 
# define TREENODE_H
# include "listNode.hpp"
class graphNode;

class treeNode {
	public:
	listNode	*H1;
	listNode	*H2;
	treeNode	*left;
	treeNode	*right;

	treeNode( void );
	treeNode( listNode *H1, listNode *H2 );
	static	int	storeNode(treeNode **current, listNode *H1, listNode *H2);

};

#endif
