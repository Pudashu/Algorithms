#include "LeftHeap.h"

static PriorityQueue Merge1(PriorityQueue H1,PriorityQueue H2);
PriorityQueue Merge(PriorityQueue H1,PriorityQueue H2){
  //1. 将大与小的右子树合并（Recursion）
  //2.将新堆成为小的的新右儿子
  //3.如果不满足，翻转左右子树并更新零路经长
  if(H1 == NULL) return H2;
  if(H2 == NULL) return H1;
  if(H1 -> Data < H2->Data) {
	Merge1(H1 , H2);
  }
  else
	Merge1(H2,H1);
}

static PriorityQueue Merge1(PriorityQueue H1, PriorityQueue H2){
  if(H1->Left == NULL) //H1->right == NULL
	H1->Left = H2;// H1->Npl == 0
  else{
	H1->Right = Merge(H1->Right,H2);
	if(H1->Left->Npl < H1->Right->Npl)
	  SwapChildren(H1);
	H1->Npl = H1->Right->Npl + 1;
  }
  return H1;
}
