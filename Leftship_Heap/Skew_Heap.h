#include "Basic.h"

#ifndef SKEW_H
#define SKEW_H

struct SHNode;
typedef SHNode * SkewHeap;

SkewHeap Initialize(void);
SkewHeap Merge(SkewHeap H1,SkewHeap H2);


#endif // !SKEW_H

struct SHNode {
  ElemType e;
  SkewHeap left;
  SkewHeap right;
};

