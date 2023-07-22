#include "TreeNode.hpp"

TreeNode::TreeNode( void ) : left(NULL), right(NULL) { }

TreeNode::TreeNode(char _c) : c(_c), left(NULL), right(NULL) {}

void		TreeNode::setC(char _c) {
	this->c = _c;
}

char		&TreeNode::getC() {
	return this->c;
}

TreeNode		*TreeNode::newNode( char _c ) {
	TreeNode *_new = new TreeNode(_c);
	return _new;
}
