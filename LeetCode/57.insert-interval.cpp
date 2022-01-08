/*
 * @lc app=leetcode id=57 lang=cpp
 *
 * [57] Insert Interval
 */

// @lc code=start
class Solution {
public:

Solution() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
}
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int i = 0, n = intervals.size();
        vector<vector<int>> res;
        while(i<n && intervals[i][1] < newInterval[0]){
            res.push_back(intervals[i]);
            i++;
        }
        while(i<n && newInterval[1] >= intervals[i][0]){
            newInterval[0] = min(intervals[i][0], newInterval[0]);
            newInterval[1] = max(intervals[i][1], newInterval[1]);
            i++;
        }
        res.push_back(newInterval);
        while(i<n){
            res.push_back(intervals[i]);
            i++;
        }
        return res;
    }
};
// @lc code=end

