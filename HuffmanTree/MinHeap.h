struct HeapNode;
typedef struct Heapstruct * MinHeap;
typedef struct TreeNode * HuffmanTree;
struct TreeNode{
  int weight;
  HuffmanTree Left,Right;
};

struct Heapstruct{
  HuffmanTree *Elements;
  int Size;
  int Capacity;
};

MinHeap Initialize(int MaxElements);
HuffmanTree DeleteMin(MinHeap H);
void Insert(MinHeap H , HuffmanTree X);
MinHeap BuildMinHeap(MinHeap H);//调序,通过权重建堆 H->Elements[i]->weight
