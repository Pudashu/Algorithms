#include "LeftHeap.h"

  //1. 将大与小的右子树合并（Recursion）
  //2.将新堆成为小的的新右儿子
  //3.如果不满足，翻转左右子树并更新零路经长
PriorityQueue Merge(PriorityQueue H1,PriorityQueue H2){
  if(H1 == NULL){
	return H2;
  }
  if(H2==NULL){
	return H1;
  }
  if(H2->Data < H1->Data){
	return Merge(H2,H1);
  }	
  H1->Right = Merge(H1->right,H2);
  if(H1->Left->Npl < H1->Right->Npl){
	PriorityQueue q = H1->Left;
	H1->Left = H1->Right;
	H1->Right = q;
  }
  H1->Npl = H1->Right->Npl + 1;
  return H1;
}
//Merge 只对右子树做处理，因为递归是对右子树进行合并并翻转
