#include "LinkNode.hpp"

linkNode::linkNode( void ) : leaf(NULL), next(NULL) { }
linkNode::linkNode( tNode *_leaf ) : leaf(_leaf), next(NULL) { }

