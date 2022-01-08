/*
 * @lc app=leetcode id=16 lang=cpp
 *
 * [16] 3Sum Closest
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        int sum = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n-2;i++){
            int j = i+1, k = n-1;
            while(j<k){
                int temp = nums[i]+nums[j]+nums[k];
                if(abs(temp-target) < abs(sum-target))  sum = temp;
                else if(temp<target) j++;
                else if(temp>target) k--;
                else return target;
            }
        }
        return sum;
    }
};
// @lc code=end

