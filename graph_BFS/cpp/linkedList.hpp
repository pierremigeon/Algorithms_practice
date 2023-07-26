#ifndef LL_FUNCS_H
# define LL_FUNCS_H
# include <iostream>

struct 	listNode {
	int	value;
	l_node	*next;
};

l_node		*makeLinkedList(int list[], int len);
int		checkListSorted(l_node *head);
void		pop(l_node *l1Head, l_node *l2Head);
void		push(l_node *l1Head, l_node *l2Head);
void		shift(node *Head);
void		graphify(g_node &gHead);
int[]		dijkstraShortestPath(g_node *gHead);
void		sortFromCommands(int list[], int list2[]);
int		checkCache( graphNode &g );

#endif
