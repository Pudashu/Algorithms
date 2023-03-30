#include "LeftHeap.h"
#include <cstdlib>

PriorityQueue DeleteMin1(PriorityQueue H){
  if (H == NULL) return NULL;
  PriorityQueue H1 = H->Left;
  PriorityQueue H2 = H->Right;
  free(H);
  H = Merge(H1,H2);
  return H;
}
