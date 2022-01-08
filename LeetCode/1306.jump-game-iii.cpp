/*
 * @lc app=leetcode id=1306 lang=cpp
 *
 * [1306] Jump Game III
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
    bool bfs(vector<int> &arr, int start, vector<bool> &visited) {
        if(start < 0 || start >= arr.size() || visited[start]) return false;
        if(arr[start] == 0) return true;
        visited[start] = true;

        return bfs(arr, start+arr[start], visited) || bfs(arr, start-arr[start], visited);
    }
    bool canReach(vector<int>& arr, int start) {
        vector<bool> visited(arr.size(),false);
        return bfs(arr, start, visited);
    }
};


// @lc code=end

