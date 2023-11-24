from typing import Optional
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        # do dfs till u read root of subroot
        # then cmp structure of tree - dfs recursive

        if not subRoot: return True
        if not root: return False

        def sameTree(root, subRoot):
            # dfs
            if not root and not subRoot:
                return True
            if root and subRoot and root.val == subRoot.val:
                return (sameTree(root.left, subRoot.left) and
                        sameTree(root.right, subRoot.right))
            return False

        if sameTree(root, subRoot):
            return True

        if self.isSubtree(root.left, subRoot):
            return True
        if self.isSubtree(root.right, subRoot):
            return True

        return False



        return False
