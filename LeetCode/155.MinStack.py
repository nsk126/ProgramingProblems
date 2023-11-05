class MinStack:

    def __init__(self):
        self.stack = []
        self.stack_min = []

    def push(self, val: int) -> None:
        self.stack.append(val)
        if not self.stack_min:
            self.stack_min.append(val)
        elif val <= self.stack_min[-1]:
            self.stack_min.append(val)

    def pop(self) -> None:
        if self.stack[-1] == self.stack_min[-1]:
            self.stack_min.pop()
        self.stack.pop()

    def top(self) -> int:
        return self.stack[-1]

    def getMin(self) -> int:
        return self.stack_min[-1]