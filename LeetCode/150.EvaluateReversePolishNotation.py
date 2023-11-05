class Solution:
    def evalRPN(self, tokens: list[str]) -> int:
        stack = []
        ops = {'+', '-', '*', '/'}

        # add elemts to the stack one by one
        for x in tokens:
            if x in ops:
                # its an operator
                # pop 2 elements from stack and do operation
                if x == '+':
                    stack.append(stack.pop() + stack.pop())
                elif x == "*":
                    stack.append(stack.pop() * stack.pop())
                elif x == "-":
                    a, b = stack.pop(), stack.pop()
                    stack.append(b - a)
                elif x == "/":
                    a, b = stack.pop(), stack.pop()
                    stack.append(int(b / a))
            else:
                # its an operand
                # just add to stack
                stack.append(int(x))

        return stack[-1]


sol = Solution()
tokens = ["2","1","+","3","*"]
tk1 = ["4","13","5","/","+"]
tk2 = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
print(sol.evalRPN(tk2))