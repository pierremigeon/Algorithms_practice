# ifndef LINKNODE_H
# define LINKNODE_H
# include "TreeNode.hpp"

class linkNode {
	public:
	tNode		*leaf;
	linkNode	*next;
};

linkNode::linkNode( void ) : leaf(NULL), next(NULL) { }

#endif
