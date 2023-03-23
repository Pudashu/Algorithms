#include "PQ.h"
#include <stdio.h>
#include <limits.h>
#define INFINITE INT_MAX
ElemType delete_min(PQ Heap){
  if(!isEmpty(Heap)){
	  printf("The Heap is empty with no minimal number");
	  return Heap->elem[0];
  }
  ElemType minimal = Heap->elem[1];
  int i = 1;
  int child = 1;
  ElemType Last = Heap->elem[Heap->Now_size--];
  for (i = 1; i*2 <=Heap->Now_size ; i=child){
	child *= 2;
	if(child != Heap->Now_size && Heap->elem[child] > Heap->elem[child+1])
	  child++;
	if(Last > Heap->elem[child])
	  Heap->elem[i] = Heap->elem[child];
	else break;
  }
  Heap->elem[i] = Last;
  return minimal;
}

ElemType decrease_key(PQ Heap,int x, ElemType delta){
  if(Heap->Now_size < x ) {
	printf("Can't find the value at x");
	return Heap->elem[0];
  }
  ElemType Mod = Heap->elem[x]-delta;
  int i,par;
  i = par = x;
  for(; i/2 >= 1 ; i=par){
	par /= 2;
	if(Mod < Heap->elem[par]) Heap->elem[i] = Heap->elem[par];
	else break;
  }
  Heap->elem[i] = Mod;
  return Mod;
}


ElemType Delete(PQ H,int x){
  if(H->Now_size < x){
	priuntf("No value at x");
	return H->elem[0];
  };
  ElemType de = H->elem[x];
  decrease_key(H,x,INFINITE);
  delete_min(H);
  return de;

}
