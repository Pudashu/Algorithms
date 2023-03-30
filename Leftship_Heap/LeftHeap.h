#include "Basic.h"
#include <cstddef>
#ifndef _LEFTHEAP_H

struct TreeNode;
typedef struct TreeNode * PriorityQueue;

/*Node will be shared among several leftist heaps after a merge
So be sure not to use the old one*/

PriorityQueue Initialize(void);
ElemType FindMin(PriorityQueue H);
int isEmpty(PriorityQueue H);
PriorityQueue Merge(PriorityQueue H1,PriorityQueue H2);

#define Insert(X,H) (H = Insert1((X),H))
#define DeleteMin(H) (H = DeleteMin1(H))
PriorityQueue Insert1(ElemType X, PriorityQueue H);
PriorityQueue DeleteMin1(PriorityQueue H);

#endif // !_LEFTHEAP_H
//
struct TreeNode{
  int Npl;
  ElemType Data;
  PriorityQueue Left;
  PriorityQueue Right;
};
