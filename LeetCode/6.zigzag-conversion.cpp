/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
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
    string convert(string s, int numRows) {
        if(numRows <= 1)    return s;
        string result ="";

        int col = 2*numRows - 2;
        for(int i = 0; i < numRows; i++){
            for(int j=i;j<s.length();j+=col){
                result +=s[j];
                int secJ = (j-i)+ col -i;
                if(i!=0 && i!=numRows-1 && secJ<s.length()){
                    result += s[secJ];
                }
            }
        }
        return result;
    }
};
// @lc code=end

