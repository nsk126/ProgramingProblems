class Solution:
    def search(self, nums: list[int], target: int) -> int:
        # binary search
        a, b = 0, len(nums)-1

        while a <= b:
            m = (a + b) // 2
            if nums[m] < target:
                a = m + 1
            elif nums[m] > target:
                b = m - 1
            else:
                return m
        return -1

s = Solution()
nums = [-1,0,3,5,9,12]
target = 9

print(s.search(nums, target))