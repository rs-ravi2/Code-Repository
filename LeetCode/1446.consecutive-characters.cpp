/*
 * @lc app=leetcode id=1446 lang=cpp
 *
 * [1446] Consecutive Characters
 */

// @lc code=start
static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    int maxPower(string s) {
        char unique = s[0];
        int currLen = 1, maxLen = 1;
        for(int i=1;i<s.length();i++){
            if(s[i] == unique){
                currLen++;
                maxLen = max(maxLen,currLen);
            }
            else{
                unique = s[i];
                currLen = 1;
            }
        }
        return maxLen;
    }
};
// @lc code=end

