# ifndef LINKNODE_H
# define LINKNODE_H
# include "TreeNode.hpp"

class linkNode {
	public:
	tNode		*leaf;
	linkNode	*next;
	linkNode( void );
	linkNode( tNode	*_leaf );
};

#endif
