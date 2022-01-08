/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
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
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> result{};
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        for(int i=1; i<arr.size(); i++){
            int diff = arr[i] - arr[i-1];
            if(diff < minDiff){
                minDiff = diff;
                result.clear();
            }

            if(diff == minDiff){
                result.push_back(vector<int> {arr[i-1], arr[i]});
            }
        }

        return result;
    }
};
// @lc code=end

