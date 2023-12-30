class Solution:
    def maxArea(self, height: list[int]) -> int:
        l, r = 0, len(height) - 1
        maxArea = 0

        while l < r:
            area = min(height[l], height[r]) * abs(l-r)
            maxArea = max(maxArea, area)

            if height[l] > height[r]:
                r -= 1
            else:
                l += 1

        return maxArea


height = [1,8,6,2,5,4,8,3,7]
sol = Solution()
print(sol.maxArea(height))