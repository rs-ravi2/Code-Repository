/*
 * @lc app=leetcode id=239 lang=cpp
 *
 * [239] Sliding Window Maximum
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
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> w;

        for(int i = 0; i < nums.size(); i++) {
            while(!w.empty() && w.front() == i-k) {
                w.pop_front();
            }

            while(!w.empty() && nums[w.back()] < nums[i]){
                w.pop_back();
            }

            w.push_back(i);

            if(i >= k-1)    result.push_back(nums[w.front()]);
        }
        return result;
    }
};
// @lc code=end

