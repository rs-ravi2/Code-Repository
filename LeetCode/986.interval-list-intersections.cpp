/*
 * @lc app=leetcode id=986 lang=cpp
 *
 * [986] Interval List Intersections
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> output;
        int l1 = firstList.size();
        int l2 = secondList.size();
        int i=0,j=0;

        while(i<l1 && j<l2) {
            int l=max(firstList[i][0], secondList[j][0]);
            int u=min(firstList[i][1], secondList[j][1]);
            if(l<=u) output.push_back({l,u});
            if(firstList[i][1] < secondList[j][1])   i++;
            else j++;
        }
        return output;
    }
};
// @lc code=end

 