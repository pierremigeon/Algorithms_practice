# ifndef TREENODE_H
# define TREENODE_H
# include <iostream>

class tNode {
	public:
	int	value;
	tNode	*left;
	tNode	*right;

	tNode( void );
	tNode( int _value);
};

#endif
