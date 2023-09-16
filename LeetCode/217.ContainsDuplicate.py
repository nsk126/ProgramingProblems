class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:

        hashset = set()

        for n in nums:
            if n in hashset:
                return True
            else:
                hashset.add(n)
        return False

sol = Solution()
ip = [1,2,3,1]
op = sol.containsDuplicate(ip)
print(op)