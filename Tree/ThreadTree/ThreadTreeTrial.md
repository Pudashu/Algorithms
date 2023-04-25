- 在遍历完后，有前驱后继
- 二叉树上有n-1个空指针域 
- 用空指针域指向前驱或后继
- 用ltag,rtag标记
- 有子树为0 无子树，指向前驱后继则为1
- 构造一个头结点，左指针域指向二叉树根节点 ltag = 0, rtag = 1; 这个结点为遍历第一个结点前驱与最后一个结点的后继
```cpp
struct BiTNode{
	ElemType data;
	int ltag,rtag;
	struct BiTNode * lchild, *rchild;
  };
typedef BiTNode * ThreadTree;
```
## 线索树的遍历
1. 求一个先序序列的后继
  1. if P->ltag == 0 -> 就是左
  2. 都在右孩子上找
2. 先序序列的前驱
  1. 运用栈 -> 不方便

3. 中序后继
  1. rtag是线索 -> 就是右
  2. rtag指向右子树 -> 找到右子树的最左下结点为后继
4. 中序前驱
  1. ltag是线索 -> 直接找到前驱
  2. ltag是左子树 -> 左子树的最右下 

5. 后序后继
  1. rtag为子树 则需要回溯->三叉链表
6. 后序前驱
  1. ltag为线索 就是lchild
  2. ltag为左子树 
	1. 有右孩子 前驱为右
	2. 无右孩子 前驱为左
