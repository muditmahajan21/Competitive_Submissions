#
# @lc app=leetcode id=977 lang=python3
#
# [977] Squares of a Sorted Array
#

# @lc code=start
class Solution:
    def sortedSquares(self, A: List[int]) -> List[int]:
        for i in range(len(A)):
            if A[i] >= 0:
                break 
            else:
                A[i] *= -1 
        A.sort()
        for i in range(len(A)):
            A[i] = A[i] ** 2 

        return A
# @lc code=end

