/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
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
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,n=nums.size(), len = INT_MAX;
        int j = 0, sum = 0;
        while(j < n){
            sum += nums[j++];
            while(sum >= target){
                len = min(len, j-i);
                sum -= nums[i++];
            }
        }
        return len == INT_MAX ? 0 : len;
    }
};
// @lc code=end

