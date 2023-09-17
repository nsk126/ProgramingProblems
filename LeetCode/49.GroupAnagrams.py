class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        hashmap = {}
        c_idx = 0
        ret = []
        for s in strs:
            # sort, check if it exists in hashmap
            # if not found, create new list, update hashmap with idx val
            # if exists, add to idx list
            a = ''.join(sorted(s))
            if a not in hashmap:
                ret.append([s])
                hashmap[a] = c_idx
                c_idx += 1  # update idx pointer
            else:
                # add to list of index idx using value in hashmap
                idx = hashmap[a]
                ret[idx].append(s)

        return ret


sol = Solution()

strs = ["eat","tea","tan","ate","nat","bat"]
op = sol.groupAnagrams(strs)
print(op)
