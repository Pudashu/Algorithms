#include "ThreadTree.h"

void InitRoot(ThreadTree &root,ThreadTree p){
  root->lflag = Tree;
  root->rflag = Thread;
  root -> lchild = p;
}

void InThreading(ThreadTree &pre,ThreadTree p){
  if(p){
	InThreading(pre,p->lchild);
	if(!p->lchild){
	  p->lflag = Thread;
	  p->lchild = pre;
	}
	if(!pre->rchild){
	  pre->rflag = Thread;
	  pre->rchild = p;
	}
	pre = p;
	InThreading(pre,p->rchild);
  }
}
