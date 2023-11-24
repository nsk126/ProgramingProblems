from typing import Optional
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        # check if node is same
        # stack [[node in p, node in q]]
        stack = [[p, q]]

        while stack:
            pnode, qnode = stack.pop()

            # condition for node with no children
            if not pnode and not qnode:
                continue

            if not pnode or not qnode or pnode.val != qnode.val:
                return False

            stack.append([pnode.left, qnode.left])
            stack.append([pnode.right, qnode.right])

        return True

