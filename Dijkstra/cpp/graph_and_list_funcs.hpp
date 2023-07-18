#ifndef GRAPH_LL_FUNCS_H
# define GRAPH_LL_FUNCS_H
# include <iostream>

typedef  (Harl::*fun_point)();


void	dijkstraMain( int list[], int len );

//Graph struct
struct	graphNode {
	bool	isSorted;
	l_node	*H1;
	l_node	*H2;
	g_node	*shift;
	g_node	*pop;
	g_node	*push;
}	g_node;

//graph functions
g_node	*initHead(int list[], int len);
g_node	*newGNode( l_node *l1Head, l_node *l2Head, int operation );


//Linked list struct
struct 	listNode {
	int	value;
	l_node	*next;
} 	l_node;

//linkedlist functions
l_node	*makeLinkedList(int list[], int len);
int	checkListSorted(l_node *head);
void	pop(l_node *l1Head, l_node *l2Head);
void	push(l_node *l1Head, l_node *l2Head);
void	shift(node *Head);
void	graphify(g_node &gHead);
int[]	dijkstraShortestPath(g_node *gHead);
void	sortFromCommands(int list[], int list2[]);

#endif
