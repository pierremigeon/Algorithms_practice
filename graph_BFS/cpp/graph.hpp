#ifndef GRAPH_H
# define GRAPH_H
# include <iostream>
# include "treeNode.hpp"
# include "linkedList.hpp"

//Graph struct
class	graphNode {
	public:
	treeNode	&cache;
	bool		isSorted;
	l_node		*H1;
	l_node		*H2;
	g_node		*shift;
	g_node		*pop;
	g_node		*push;
	graphNode( void );
	graphNode( graphNode &g );
	graphNode( int list[], int len );
};

//graph functions
g_node	*newGNode( l_node *l1Head, l_node *l2Head, int operation );
void	graphify( g_node &g );
void	dijkstraMain( int list[], int len );

#endif
