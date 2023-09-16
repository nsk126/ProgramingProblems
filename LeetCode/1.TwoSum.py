class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:

        hashmap = {}
        for i, n in enumerate(nums):
            if target - n in hashmap:
                return [i, hashmap[target - n]]
            else:
                # update hashmap
                hashmap[n] = i

sol = Solution()

nums, target = [2,7,11,15], 9
op = sol.twoSum(nums, target)
print(op)
