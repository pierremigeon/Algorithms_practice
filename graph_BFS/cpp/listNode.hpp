#ifndef LL_FUNCS_H
# define LL_FUNCS_H
# include <iostream>
class graphNode;

class 	listNode {
	public:
	int		value;
	listNode	*next;
	listNode( void );
	listNode( int _value );

	static	listNode	*makeLinkedList(int list[], int len);
	static	int		checkListSorted(listNode *head);
	static	void		shift(listNode **Head);
	static	int		*dijkstraShortestPath(graphNode *gHead);
	static	void		sortFromCommands(int list[], int list2[]);
	static	int		checkCache( graphNode &g );
	static	listNode        *last( listNode *H );
	static	int		checkSort( listNode *head );
	static	void		pushOrPop( listNode **l1Head, listNode **l2Head );
};

#endif
