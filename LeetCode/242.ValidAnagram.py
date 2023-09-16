class Solution:
    def isAnagram(self, s: str, t: str) -> bool:

        cS, cT = {}, {}

        if len(s) != len(t):
            return False

        for char in s:
            if char in cS:
                cS[char] += 1
            else:
                cS[char] = 0

        for char in t:
            if char in cT:
                cT[char] += 1
            else:
                cT[char] = 0

        if cS == cT:
            return True
        else:
            return False

sol = Solution()
s = "anagram"
t = "nagaram"

op = sol.isAnagram(s, t)
print(op)
