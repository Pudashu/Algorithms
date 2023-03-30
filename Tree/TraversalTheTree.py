#!/usr/bin/env python3

from typing import List


class TreeNode:
    def __init__(self,x):
        self.data = x
        self.left = None
        self.right = None

class Solution:
    def PreOrderTraversal(self,root:TreeNode) -> List[int]:
        def dfs(cur):
            if not cur:
                return;
            #Preorder:
            res.append(root.data)
            dfs(cur.left)
            dfs(cur.right)
            #Mid
            #Last
        res = []
        dfs(root)
        return res

class Solution:
    def LevelOrder(self,root:TreeNode) -> List[int]:
        if not root:
            return []
        cur , res = [root], []
        while cur:
            lay,layval = [],[]
            for node in cur:
                layval.append(node.data)
                if node.left: lay.append(node.left)
                if node.right: lay.append(node.right)
            cur = lay
            res.append(layval)
        return res

# 迭代2：前、中、后序遍历通用模板（只需一个栈的空间）
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]: 
        res = []
        stack = []
        cur = root
        # 中序，模板：先用指针找到每颗子树的最左下角，然后进行进出栈操作
        while stack or cur:
            while cur:
                stack.append(cur)
                cur = cur.left
            cur = stack.pop()
            res.append(cur.val)
            cur = cur.right
        return res
        
        # # 前序，相同模板
        # while stack or cur:
        #     while cur:
        #         res.append(cur.val)
        #         stack.append(cur)
        #         cur = cur.left
        #     cur = stack.pop()
        #     cur = cur.right
        # return res
        
        # # 后序，相同模板
        # while stack or cur:
        #     while cur:
        #         res.append(cur.val)
        #         stack.append(cur)
        #         cur = cur.right
        #     cur = stack.pop()
        #     cur = cur.left
        # return res[::-1]
      

