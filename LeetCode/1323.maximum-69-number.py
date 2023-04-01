#
# @lc app=leetcode id=1323 lang=python3
#
# [1323] Maximum 69 Number
#

# @lc code=start
class Solution:
    def maximum69Number (self, num: int) -> int:
        s = str(num)
        i=0
        for i in range(len(s)):
            # print(i)
            if s[i] == '6':
                break
        print(i)
        return s.replace(i,'9')
# @lc code=end

