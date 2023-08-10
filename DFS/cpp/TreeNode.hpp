# ifndef TREENODE_H
# define TREENODE_H

class tNode {
	public:
	int	value;
	tNode	*left;
	tNode	*right;

	tNode( void );
	tNode( int _value) : value(_value) { }
};

#endif
