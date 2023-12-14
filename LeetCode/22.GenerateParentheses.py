class Solution:
    def generateParenthesis(self, n: int) -> list[str]:

        # gen n pairs - dfs approach
        # 1 -> ()
        # 2 -> (()), ()()

        ret = []
        pair = []

        def dfs(left, right):
            if left == right == n:
                ret.append("".join(pair))
                return

            if left < n:
                pair.append('(')
                dfs(left+1, right)
                pair.pop()

            if right < left:
                pair.append(')')
                dfs(left, right+1)
                pair.pop()

        dfs(0,0)
        return ret


sol = Solution()
x = 3
print(sol(x))