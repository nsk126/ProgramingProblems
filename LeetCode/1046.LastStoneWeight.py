import heapq

class Solution:
    def lastStoneWeight(self, stones: list[int]) -> int:

        stones = [-1 * stone for stone in stones]
        heapq.heapify(stones)

        while len(stones) > 1:
            a = heapq.heappop(stones)
            b = heapq.heappop(stones)

            heapq.heappush(stones, a - b)

        return -1 * stones[0]


s = Solution()
stones = [2,7,4,1,8,1]
print(s.lastStoneWeight(stones))
