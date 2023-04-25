# 哈夫曼编码/最小冗余码
- ASCII码 等长
- 哈夫曼码 -> 不定长码
  - 将文本代码总长度达到最小(频率高的码短)
  - 从叶子到根的路径
  - 左孩子为0 右孩子为1
## 方式
1. 根据使用频度构建哈夫曼树
2. 从叶子节点到根节点构建编码
==Perculiarity==: 任何不是其他的前缀
## 译码
1. 根据码通过路径找到叶子结点
## Implementation
- The usage of trident linked list
- There is no node of degree 1
- n leaf means 2n-1 node
- should contain parent pointer
```c
typedef struct {
	unsigned int weight;
	unsigned int parent,lchild,rchild;
  }HTNode, * HuffmanTree;
typedef char ** HuffmanCode// 字符串数组
```

