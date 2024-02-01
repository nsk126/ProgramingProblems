class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        hash = set()
        res = 0
        l1 = 0 # slow p
        l2 = 0 # fast p

        while l2 < len(s):
            if s[l2] not in hash:
                hash.add(s[l2])
                l2 += 1 # fp
            else:
                res = max(res, l2 - l1)
                l1 += 1
                l2 = l1
                hash = set()

        return max(res, l2 - l1)
