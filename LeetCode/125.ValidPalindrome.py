class Solution:
    def isPalindrome(self, s: str) -> bool:

        # Sol #1
        # strr = ""
        # for x in s:
        #     if x.isalpha():
        #         strr += x.lower()
        # return strr == strr[::-1]

        # Sol #2
        a, b = 0, len(s)-1
        while a < b:
            while not s[a].isalnum() and a < len(s)-1:
                a += 1
            while not s[b].isalnum() and b >= 0:
                b -= 1

            # print(a,b, "-->", s[a], s[b])
            if s[a].lower() != s[b].lower():
                return False
            # update
            a += 1
            b -= 1

        return True


s = Solution()
s1 = "A man, a plan, a canal: Panama"
print(s.isPalindrome(s1))
