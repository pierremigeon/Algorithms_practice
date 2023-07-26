#ifndef TREENODE_H 
# define TREENODE_H

//binary list struct
class treeNode {
	private:
	int		list[];
	int		len;
	treeNode	*left;
	treeNode	*right;

	public:
	treeNode	*getLeft() const;
	treeNode	*getRight() const;
	int		[]getlist() const;
	int		getInt() const;
	treeNode(int list[], int len);
	void    	setLeft(treeNode *target);
	void    	setRight(treeNode *target);
};

#endif
