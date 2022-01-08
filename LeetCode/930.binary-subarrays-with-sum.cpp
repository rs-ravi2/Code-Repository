/*
 * @lc app=leetcode id=930 lang=cpp
 *
 * [930] Binary Subarrays With Sum
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
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count = 0;
        int ones  = 0;
        int zeros_arr[nums.size()+1];
        zeros_arr[0]  = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if (nums[i])
            {
                ones++;
                zeros_arr[ones] = 0;
            }
            else
                zeros_arr[ones]++;
            
            if (ones >= goal)
            {
                if (goal)
                    count += (zeros_arr[ones-goal]+1);
                else
                    count += (zeros_arr[ones-goal]);
            }

        }
        return count;
    }
};
// @lc code=end

