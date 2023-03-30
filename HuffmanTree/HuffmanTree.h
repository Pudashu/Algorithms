#include "MinHeap.h"

//Construction
HuffmanTree Huffman(MinHeap H){
  int i; 
  HuffmanTree T;
  BuildMinHeap(H);//Use Heap to find minimum two node
  for (i = 1 ; i< H->Size ; i++){
	T = (struct TreeNode *)(sizeof(struct TreeNode));
	
	T->Left = DeleteMin(H);
	T->Right = DeleteMin(H);
	T->weight = T->Left->weight + T->Right->weight;
	Insert(H,T);
  }
  T=DeleteMin(H);
  return T;
}

