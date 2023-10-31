class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        # prefix array
        pref = []
        for i in range(len(nums)):
            if i == 0:
                pref.append(nums[i])
            else:
                pref.append(nums[i] * pref[i-1])

        # postfix array
        post = [0 for _ in range(len(nums))]
        for i in range(len(nums)-1, -1,-1):
            if i == len(nums)-1:
                post[i] = nums[i]
            else:
                post[i] = nums[i] * post[i+1]

        # breakpoint()

        # ans array
        answer = [0 for _ in range(len(nums))]
        for i in range(len(answer)):
            if i == 0:
                answer[i] = post[i+1]
            elif i == len(nums)-1:
                answer[i] = pref[i-1]
            else:
                answer[i] = pref[i-1] * post[i+1]

        return answer


nums = [1,2,3,4]
sol = Solution()
res = sol.productExceptSelf(nums)
print(res)