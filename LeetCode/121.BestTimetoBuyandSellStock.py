class Solution:
    def maxProfit(self, prices: list[int]) -> int:

        l,h = 0,0
        mp = 0
        for x in range(len(prices)):
            if prices[x] < prices[l]:
                l = x
                h = x

            if prices[x] > prices[h]:
                h = x
                mp = max(prices[h] - prices[l], mp)

        return mp



s = Solution()
prices = [7,1,5,3,6,4]
a = s.maxProfit(prices)

print(a)