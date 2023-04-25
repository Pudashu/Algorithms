enum Flag {
	Tree,Thread
};

struct ThreadTreeNode;
typedef struct ThreadTreeNode * ThreadTree;

struct ThreadTreeNode{
  ThreadTree lchild,rchild;
  Flag lflag,rflag;
  ElemType data;
};
