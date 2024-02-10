class Solution:
    def findMin(self, nums: list[int]) -> int:
        l, r = 0, len(nums) - 1
        res = nums[0]

        while r >= l:
            if nums[l] < nums[r]:
                # sorted arr or portion
                res = min(res, nums[l])
                break

            m = (l+r)//2
            res = min(res, nums[m])
            if nums[m] >= nums[l]:
                l = m + 1
            else:
                r = m - 1

        return res