## 前序遍历
- 前序遍历中遍历节点的顺序与处理节点的顺序一致 ， 碰到即处理
- 根 左 右
```python3

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        # 注意：根节点为空，直接返回空列表
        if not root:
            return []

        stack = [root]
        res = []

        while stack:
            # 根节点出栈
            node = stack.pop()
            # 将根节点值加入结果
            res.append(node.val)
            # 右子树入栈
            if node.right:
                stack.append(node.right)
            # 左子树入栈
            if node.left:
                stack.append(node.left)

        return res
```
## 中序遍历
- 左子树 根 右子树
1. 寻找左子树，将当前压栈
2. 弹栈并访问右子树
```python3
stack = []
if root:
  stack.append(root)
  root = root.left
if not root:
  cur = stack.pop()
  res.append(cur.val)
  root = cur.right

# Entire:
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        # 注意：根节点为空，直接返回空列表
        if not root:
            return []

        stack = []
        res = []

        while root or stack:
            # 一直向左子树走，每一次将当前节点保存到栈中
            if root:
                stack.append(root)
                root = root.left
            # 当前节点为空，证明走到了最左边，从栈中弹出节点加入结果数组
            # 开始对右子树重复上述过程。
            else:
                cur = stack.pop()
                res.append(cur.val)
                root = cur.right

        return res

```
- Time Complexity O(n) and Space Complexity O(n)

## 后序遍历
- 左子树 右子树 根
- 先根，再找右，再找左 -> 反向
1. 空栈
2. if root or if stack: 从根节点开始
  1. 将当前节点压栈，进入左子树
  2. 若无左， 进入右子树
  3. 若均无，出栈
  4. 若出栈的为栈顶元素左， 找右
  5. 若出栈元素为右， 继续弹出
```python3

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: TreeNode) -> List[int]:
        # 注意：根节点为空，直接返回空列表
        if not root:
            return []

        stack = []
        res = []

        while root or stack:
            while root:
                # 当前节点入栈
                stack.append(root)
                # 如果当前节点有左子树，继续向左子树找
                if root.left:
                    root = root.left
                # 如果当前节点无左子树，在右子树继续找
                else:
                    root = root.right
            # 跳出循环的条件是 root 为空，那当前栈顶元素为叶子节点。
            # 弹出栈顶元素，并加入结果数组
            cur = stack.pop()
            res.append(cur.val)
            # 如果栈不为空，且当前栈顶元素的左节点是刚刚跳出的栈顶元素 cur
            # 则转向遍历右子树当前栈顶元素的右子树
            if stack and stack[-1].left == cur:
                root = stack[-1].right
            # 否则证明当前栈顶元素无左右子树，那当前的栈顶元素弹出。
            else:
                root = None

        return res
```
