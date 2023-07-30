#include "treeNode.hpp"

treeNode::treeNode( int _list[], int _len) : list(_list), len(_len) { }

treeNode	*treeNode::getLeft( void ) const {
	return this->left;
}

treeNode	*treeNode::getRight( void ) const {
	return this->right;
}

int		*treeNode::getlist( void ) const {
	return this->list;
}

int		treeNode::getInt( void ) const {
	return this->len;
}

void	treeNode::setLeft(treeNode *target) {
	this->left = target;
}

void	treeNode::setRight(treeNode *target) {
	this->right = target;
}

