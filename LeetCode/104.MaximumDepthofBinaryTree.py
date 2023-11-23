from typing import Optional
# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:

        # check if no children - ret 0
        if root == None:
            return 0
        else:
            # calc depth recursively
            dleft, dright = 1, 1

            dleft += self.maxDepth(root.left)
            dright += self.maxDepth(root.right)

            return max(dleft, dright)