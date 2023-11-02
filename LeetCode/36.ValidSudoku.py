class Solution:
    def isValidSudoku(self, board: list[list[str]]) -> bool:

        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        squares = {}

        for i in range(9):#rows
            for j in range(9):#cols
                if board[i][j] == ".":
                    continue

                if (board[i][j] in rows[i] or
                    board[i][j] in cols[j] or
                    board[i][j] in squares.get((i // 3, j // 3), set())):
                    return False
                rows[i].add(board[i][j])
                cols[j].add(board[i][j])
                squares.setdefault((i // 3, j // 3), set()).add(board[i][j])

        return True

sol = Solution()
board = [["5","3",".",".","7",".",".",".","."]
,["6",".",".","1","9","5",".",".","."]
,[".","9","8",".",".",".",".","6","."]
,["8",".",".",".","6",".",".",".","3"]
,["4",".",".","8",".","3",".",".","1"]
,["7",".",".",".","2",".",".",".","6"]
,[".","6",".",".",".",".","2","8","."]
,[".",".",".","4","1","9",".",".","5"]
,[".",".",".",".","8",".",".","7","9"]]
op = sol.isValidSudoku(board)
print(op)