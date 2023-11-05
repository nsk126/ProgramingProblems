class Solution:
    def isValid(self, s: str) -> bool:

        paren_dict = {
            ")": "(",
            "]": "[",
            "}": "{"
        }

        stack = []
        for ss in s:
            if ss in paren_dict:
                if stack and stack[-1] == paren_dict[ss]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(ss)
        if stack == []:
            return True
        return False

sol = Solution()
s = "(]"
s1 = "[]"
s2 = "()[]{}"

print(sol.isValid(s))