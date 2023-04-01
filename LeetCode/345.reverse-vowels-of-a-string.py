#
# @lc app=leetcode id=345 lang=python3
#
# [345] Reverse Vowels of a String
#

# @lc code=start
class Solution:
    def reverseVowels(self, s: str) -> str:
        v=[]
        vowels = ['a', 'e', 'i', 'o', 'u']
        for i in range(0,len(s)):
            if s[i] in vowels:
                v.append(i);

        for i in range(len(v)//2):
            x = s[i]
            y= s[len(v)-i+1]
            x,y = y,x
        
        return s

# @lc code=end

