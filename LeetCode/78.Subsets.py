class Solution:
    def subsets(self, nums: list[int]) -> list[list[int]]:

        res = [] # default
        sub = []
        # breakpoint()

        def dfs(x): # x is stage
            if x >= len(nums):
                res.append(sub.copy())
                return

            sub.append(nums[x])
            dfs(x+1)

            sub.pop()
            dfs(x+1)

        dfs(0)

        return res


nums = [1,2,3]
s = Solution()
res = s.subsets(nums)
print(res)