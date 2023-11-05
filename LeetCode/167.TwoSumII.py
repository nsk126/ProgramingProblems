class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:

        a, b = 0, len(numbers)-1
        while a < b:
            if numbers[a] + numbers[b] > target:
                b -= 1

            if numbers[a] + numbers[b] < target:
                a += 1

            if numbers[a] + numbers[b] == target:
                return a+1, b+1

        return False # error case


numbers = [2,7,11,15]
target = 9
s = Solution()
print(s.twoSum(numbers, target))