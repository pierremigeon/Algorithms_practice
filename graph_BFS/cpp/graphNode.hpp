#ifndef GRAPH_H
# define GRAPH_H
# include <iostream>
# include "treeNode.hpp"
# include "list_funcs.hpp"
# include "listNode.hpp"

class	graphNode {
	public:
	static	treeNode	*cacheHead;
	graphNode		*next[4];
	bool			isSorted;
	bool			del;
	listNode		*H1;
	listNode		*H2;
	graphNode( void );
	graphNode( graphNode &g, int operation );
	graphNode( int list[], int len );
	//graph functions
	static	graphNode	*newGNode( listNode *l1Head, listNode *l2Head, int operation );
	static	void		graph( int list[], int len );
	//static	listNode	*copyList( listNode *l ); 
	//int	checkCache( graphNode &g );
	static	void		graphify(graphNode *gHead);
};

#endif
