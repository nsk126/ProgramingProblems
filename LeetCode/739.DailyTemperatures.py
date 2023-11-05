class Solution:
    def dailyTemperatures(self, temperatures: list[int]) -> list[int]:

        # count num of days till higher temp
        # add num to stack, count adds - pop if found a greater
        stack = []
        ret = [0] * len(temperatures)

        for idx, temp in enumerate(temperatures):
            while stack and stack[-1][0] < temp:
                temp_val, temp_idx = stack.pop()
                ret[temp_idx] = idx - temp_idx
            stack.append([temp, idx])

        return ret

temperatures = [73,74,75,71,69,72,76,73]
t1 = [30,40,50,60]
sol = Solution()
print(sol.dailyTemperatures(t1))