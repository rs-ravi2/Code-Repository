/*
 * @lc app=leetcode id=416 lang=cpp
 *
 * [416] Partition Equal Subset Sum
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
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);

        if(sum%2)   return false;

        bitset<10001> bits(1);
        for(auto &num : nums) {
            bits = bits | bits << num;
        }

        return bits[sum/2];
    }
};
// @lc code=end

