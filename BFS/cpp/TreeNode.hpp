#ifndef TREE_H
# define TREE_H
#include <iostream>

class TreeNode {
	public:
	char	c;
	TreeNode	*left;
	TreeNode	*right;

	TreeNode( void );
	TreeNode(char _c);
	void			setC(char _c);
	char			&getC( void );
	static TreeNode		*newNode( char _c );
};

#endif
