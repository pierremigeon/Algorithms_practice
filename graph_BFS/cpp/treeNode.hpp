#ifndef TREENODE_H 
# define TREENODE_H

//binary list struct
class treeNode {
	public:
	listNode	*H1;
	listNode	*H2;
	treeNode	*left;
	treeNode	*right;

	treeNode( void );
	treeNode( listNode *H1, listNode *H2 );
};

#endif
