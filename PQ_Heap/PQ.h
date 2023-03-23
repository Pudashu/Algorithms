#ifndef PQ_H
#define PQ_H
#define MIN_MAXL 3
typedef int ElemType;

struct Heap_struct
{
	int max_size;
	int Now_size;
	ElemType * elem;
};
typedef struct Heap_struct * PQ;

void create_pq(PQ Heap,int max);
int insert_PQ(PQ Heap, ElemType x);// return the index and return -1 to recognize fail inserting
ElemType delete_min(PQ Heap);//Replace the last_elem
ElemType decrease_key(PQ Heap, int X , ElemType delta);
ElemType Delete(PQ Heap,int X);

#endif // !PQ_H
