#include "list_funcs.hpp"
#include "BinaryTreeFuncs.hpp"
#include "LinkNode.hpp"

void	postOrder(tNode *head) {
	if ( head == NULL )
		return ;
	postOrder(head->left);
	postOrder(head->right);
	std::cout << head->value << std::endl;
}

void	inOrder(tNode *head) {
	if ( head == NULL )
		return ;
	inOrder(head->left);
	std::cout << head->value << std::endl;
	inOrder(head->right);
}

void	pushStack(linkNode **sHead, tNode *node) {
	linkNode *top = new linkNode(node);

	top->next = *sHead;
	*sHead = top;
}

tNode	*popStack( linkNode **sHead ) {
	tNode	*out;

	if (!*sHead)
		return ( NULL );
	out = (*sHead)->leaf;
	*sHead = (*sHead)->next;
	return ( out );
}

int	notVisited( linkNode *visited, tNode *current ) {
	while ( visited ) {
		if ( visited->leaf == current )
			return ( 0 );
		visited = visited->next;
	}
	return ( 1 );
}

tNode	*updateCurrent( tNode *current, linkNode **stack, linkNode *visited ) {
	if ( current->left && notVisited( visited, current->left ))
		return ( current->left );
	std::cout << current->value << std::endl;
	return ( current->right ? current->right : popStack(stack));
}

void	visit( linkNode **visited, tNode *currentT ) {
	linkNode	*visit = *visited;

	if ( *visited == NULL ) {
		*visited = new linkNode( currentT );
		return ;
	}
	while ( visit->next )
		visit = visit->next;
	visit->next = new linkNode(currentT);
}

void	inOrder_it(tNode *current) {
	linkNode	*stack = NULL;
	linkNode	*visited = NULL;

	while ( stack || current ) {
		if ( notVisited(visited, current) ) {
			if ( current->left )
				pushStack(&stack, current);
			visit(&visited, current);
		}
		current = updateCurrent(current, &stack, visited);
	}
}

void	preOrder(tNode *head) {
	if ( head == NULL )
		return ;
	std::cout << head->value << std::endl;
	preOrder(head->left);
	preOrder(head->right);
}

void	DFS_inOrder(tNode *head, int query) {
	if ( head == NULL )
		return ;
	if ( head->value == query )
		std::cout << "Query: " << query <<  " was found in the tree using DFS" << std::endl;
	if ( head->left != NULL )
		DFS_inOrder(head->left, query);
	std::cout << head->value << std::endl;
	if ( head->right != NULL )
		DFS_inOrder(head->right, query);
}
