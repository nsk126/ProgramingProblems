class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        # hashmap for s1
        hmap_s1 = {}
        for x in s1:
            hmap_s1[x] = 1 + hmap_s1.get(x, 0)

        # 2 points
        l , r = 0, len(s1)

        while r <= len(s2):
            # get substring
            ss = s2[l:r]

            # get hmap
            hmap_s2 = {}
            for x in ss:
                hmap_s2[x] = 1 + hmap_s2.get(x,0)

            if hmap_s2 == hmap_s1:
                return True

            # update
            r += 1
            l += 1

        return False

s1 = "ab"
s2 = "eidboaoo"

sol = Solution()
res = sol.checkInclusion(s1, s2)
print(res)