#include "list_funcs.hpp"
#include "BinaryTreeFuncs.hpp"
#include "LinkNode.hpp"

void	postOrder(tNode *head);
void	inOrder(tNode *head);
void	pushStack(linkNode **sHead, tNode *node);
tNode	*popStack( linkNode **sHead );
int	notVisited( linkNode *visited, tNode *current );
tNode	*updateCurrent( tNode *current, linkNode **stack, linkNode *visited );
void	visit( linkNode **visited, tNode *currentT );
void	inOrder_it(tNode *current);
void	preOrder(tNode *head);
void	DFS_inOrder(tNode *head, int query);
