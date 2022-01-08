/*
 * @lc app=leetcode id=713 lang=cpp
 *
 * [713] Subarray Product Less Than K
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
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)    return 0;

        int prod=1, res=0, left=0;
        for(int right=0;right<nums.size();right++) {
            prod *= nums[right];

            while(prod >= k){
                prod/=nums[left];
                left++;
            }

            res += right - left + 1;
        }
        return res;
    }
};
// @lc code=end

