class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        r1, r2 = 0, len(matrix)-1

        while r1 <= r2:
            m1 = (r1+r2)//2

            if matrix[0][0] > target or matrix[-1][-1] < target:
                return False # tgt is out of bounds

            if matrix[m1][0] > target:
                r2 = m1 - 1
            elif matrix[m1][-1] < target:
                r1 = m1 + 1
            else:
                # this means the tgt is in the row
                break

        c1, c2 = 0, len(matrix[m1])-1
        while c1 <= c2:
            m2 = (c1+c2)//2
            if matrix[m1][m2] > target:
                c2 = m2 - 1
            elif matrix[m1][m2] < target:
                c1 = m2 + 1
            else:
                # found it
                return True

        # did not find it
        return False

matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target = 3

# matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]]
# target = 13
s = Solution()
print(s.searchMatrix(matrix, target))