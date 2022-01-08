/*
 * @lc app=leetcode id=1004 lang=cpp
 *
 * [1004] Max Consecutive Ones III
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
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        for (int l = 0, r = 0; r < nums.size(); r++) {
            k -= (nums[r] == 0);
            while(k<0){
                k += (nums[l++] == 0);
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
// @lc code=end

