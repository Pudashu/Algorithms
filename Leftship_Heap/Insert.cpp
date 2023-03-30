#include "LeftHeap.h"
#include <cstdlib>

PriorityQueue Insert1(ElemType X , PriorityQueue H){
  PriorityQueue SingleNode;
  SingleNode = (PriorityQueue) malloc(sizeof(struct TreeNode));
  //Fatalerror of assigning space;
  SingleNode -> Data = X;
  SingleNode->Left = SingleNode->Right = NULL;
}
