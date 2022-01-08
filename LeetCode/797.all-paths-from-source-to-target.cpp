/*
 * @lc app=leetcode id=797 lang=cpp
 *
 * [797] All Paths From Source to Target
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
    vector<vector<int> > result;
    vector<int> temp;
    int target;
    void dfs(vector<vector<int> > &graph, int currNode = 0){
        temp.push_back(currNode);

        if(currNode == target) result.push_back(temp);

        else{
            for(int node:graph[currNode]){
                dfs(graph, node);
            }
        } 

        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        target = graph.size() - 1;
        dfs(graph);
        return result;
    }
};
// @lc code=end