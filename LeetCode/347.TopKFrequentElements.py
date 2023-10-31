class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:

        hmap = {}
        ans = []
        # goal: find top k elements
        # go thru list, make a hashmap - key: num, val: freq
        for num in nums:
            hmap[num] = 1 + hmap.get(num, 0)

        karr = []
        varr = []
        for kk, vv in hmap.items():
            karr.append(kk)
            varr.append(vv)

        while k > 0:
            # find max in varr
            # use index mapping to find key
            # overwrite max to 0
            c = varr.index(max(varr))
            ans.append(karr[c]) # key of interest
            varr[c] = 0 # overwrite max value to 0 - to get next max value

            # decrement k
            k -= 1

        return ans



sol = Solution()

# nums, k = [1,1,1,2,2,3], 2
nums, k = [1], 1

op = sol.topKFrequent(nums, k)

print(op)

