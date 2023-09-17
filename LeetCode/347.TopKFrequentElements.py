class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:

        hashmap = {}
        ret = []

        for x in nums:
            if x not in hashmap:
                hashmap[x] = 1
            else:
                hashmap[x] += 1
        return


sol = Solution()

nums, k = [1,1,1,2,2,3], 2
op = sol.topKFrequent(nums, k)

print(op)

