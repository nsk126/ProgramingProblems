class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        hset = set(nums)
        longest_seq = 0
        for x in nums:
            if(x - 1) not in hset:
                # start of seq
                seqlen = 0
                while (x + seqlen) in hset:
                    seqlen += 1
                longest_seq = max(seqlen, longest_seq)

        return longest_seq


sol = Solution()
nums = [0,3,7,2,5,8,4,6,0,1]
op = sol.longestConsecutive(nums)
print(op)