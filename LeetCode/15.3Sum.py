class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums = sorted(nums)
        ret = []

        # select 2 pair, if -(a + b) in arr return a,b,-a-b
        for i, j in enumerate(nums):
            if i > 0 and j == nums[i-1]:
                continue

            l, r = i + 1, len(nums) - 1
            while l < r:
                sum = j + nums[l] + nums[r]
                if sum < 0:
                    l += 1
                elif sum > 0:
                    r -= 1
                else:
                    ret.append([j, nums[l] , nums[r]])
                    l += 1
                    while nums[l] == nums[l - 1] and l < r:
                        l += 1

        return ret



nums = [-1,0,1,2,-1,-4]
s = Solution()
print(s.threeSum(nums))