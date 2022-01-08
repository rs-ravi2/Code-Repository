/*
 * @lc app=leetcode id=1217 lang=cpp
 *
 * [1217] Minimum Cost to Move Chips to The Same Position
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
    int minCostToMoveChips(vector<int>& position) {
        int oddPos = 0, evenPos = 0;
        for(int p : position)
            p & 1 ? oddPos++ : evenPos++;
        return min(oddPos, evenPos);
    }
};
// @lc code=end

