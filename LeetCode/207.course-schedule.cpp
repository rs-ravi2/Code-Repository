/*
 * @lc app=leetcode id=207 lang=cpp
 *
 * [207] Course Schedule
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
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        graph g = buildGraph(numCourses, prerequisites);
        vector<int> degrees = computeIndegree(g);
        for (int i = 0; i < numCourses; i++) {
            int j = 0;
            for(; j < numCourses; j++) {
                if(!degrees[j]){
                    break;
                }
            }

            if(j == numCourses){
                return false;
            }

            degrees[j]--;
            for(int v:g[j]){
                degrees[v]--;
            }
        }
        return true;
    }
private:
    typdef vector<vector<int>> graph;

    graph buildGraph(int numCourses, vector<pair<int, int>>& prerequisites){
        graph g(numCourses);
        for (auto p: prerequisites){
            g[p.second].push_back(p.first);
        }
        return g;
    }

    vector<int> computeIndegree(graph &g){
        vector<int> degrees(g.size(), 0 ){
            for(auto adj:g){
                for(int v:adj){
                    degrees[v]++;
                }
            }
            rerturn degrees;
        }
    }
};
// @lc code=end

