struct HeapNode;
typedef struct HeapNode * MinHeap;

typedef struct TreeNode * HuffmanTree;
struct TreeNode{
  int weight;
  HuffmanTree Left,Right;
};

struct HeapNode{
  HuffmanTree Elements;
  int Size;
  int Capacity;
};

MinHeap Initialize(int MaxElements);
HuffmanTree DeleteMin(MinHeap H);
void Insert(MinHeap H , HuffmanTree X);
MinHeap BuildMinHeap(MinHeap H);//调序
