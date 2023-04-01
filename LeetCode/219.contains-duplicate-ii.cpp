/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
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
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, vector<int> > mp;
        for(int i=0;i<nums.size();i++) {
            mp[nums[i]].append(i);
        }

        for(auto it=mp.begin();it!=mp.end();it++){
            res = it->second;
            for(int i=1;i<it->second.size();i++) {
                if(res[i] - res[i-1] <= k)  return true;
            }
        }
        return false;
    }
};
// @lc code=end

