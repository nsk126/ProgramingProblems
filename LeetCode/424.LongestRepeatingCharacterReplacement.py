class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        l, r = 0, 0
        hmap = {}
        res = 0

        while l < len(s) and r < len(s):
            hmap[s[r]] = 1 + hmap.get(s[r], 0) # incriment hmap w char count
            while (r - l + 1  - max(hmap.values())) > k and l < len(s):
                # remove item from hash
                hmap[s[l]] -= 1
                # incriment left pointer
                l += 1

            res = max(res, r - l + 1)
            r += 1

        return res


s = "AABABBA"
k = 1

sol = Solution()
res = sol.characterReplacement(s, k)
print(res)