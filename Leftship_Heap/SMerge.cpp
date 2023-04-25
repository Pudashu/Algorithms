#include "Skew_Heap.h"

SkewHeap Merge(SkewHeap H1, SkewHeap H2){
  if(!H1)
	return H2;
  if(!H2)
	return H1;
  if(H1->e > H2->e){
	SkewHeap Tmp = H1;
	H1 = H2;
	H2 = Tmp;
  }
  H1->right = Merge(H1->right,H2);
  SkewHeap Tmp = H1->left;
  H1->left = H1->right;
  H1->right = H1->left;
  return H1;
}

