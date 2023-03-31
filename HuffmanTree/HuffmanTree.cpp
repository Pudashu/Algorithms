#include "MinHeap.h"

void Percolatedown(MinHeap H,HuffmanTree HT, int i);
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

MinHeap BuildMinHeap(MinHeap H){
  for(int i = H->Size / 2 ; i > 0 ; i--){
	Percolatedown(H,H->Elements[i],i);
  }
  return H;
}

void Percolatedown(MinHeap H,HuffmanTree HT,int i){
  int wt = HT->weight;
  int child = i;
  for(;child <= H->Size ; i = child){
	child = i * 2;
	if(child!=H->Size && H->Elements[child] > H->Elements[child+1]){
	  child+=1;
	}
	if(H->Elements[child]->weight < wt){
	  H->Elements[i] = H->Elements[child];
	}
	else break;

  }
  H->Elements[i]->weight = wt;

}
