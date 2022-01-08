/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if (nums.size() < 4) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if (accumulate(next(nums.begin(), i), next(nums.begin(), i + 4), int64_t(0)) > target) break;
            if (int64_t(nums[i]) + int64_t(nums[nums.size() - 3]) + int64_t(nums[nums.size() - 2]) + int64_t(nums[nums.size() - 1]) < target) continue;
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                if (j - i > 1 && nums[j] == nums[j - 1]) continue;
                if (accumulate(next(nums.begin(), j), next(nums.begin(), j + 3), int64_t(0)) + nums[i] > target) break;
                if(int64_t(nums[j]) + int64_t(nums[nums.size() - 2]) + int64_t(nums[nums.size() - 1]) + int64_t(nums[i]) < target) continue;
                int l = j + 1, r = nums.size() - 1;
                while(l < r)
                {
                    int64_t num = int64_t(nums[i]) + int64_t(nums[j]) + int64_t(nums[l]) + int64_t(nums[r]);
                    if (num == target) 
                    {
                        ans.push_back({nums[i], nums[j], nums[l++], nums[r--]});
                        while(l < r && nums[l] == nums[l - 1]) l++;
                        while(l < r && nums[r] == nums[r + 1]) r--;
                    }
                    else if (num < target)
                    {
                        l++;
                        while(l < r && nums[l] == nums[l - 1]) l++;
                    }
                    else
                    {
                        r--;
                        while(l < r && nums[r] == nums[r + 1]) r--;
                    }
                }
            }
        }
        return ans;
    }
};
// @lc code=end

