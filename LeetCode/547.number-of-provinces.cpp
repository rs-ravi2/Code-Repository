/*
 * @lc app=leetcode id=547 lang=cpp
 *
 * [547] Number of Provinces
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
    vector<int> v;
    int parent(int x){
        if(v[x] == -1)  return x;

        else return v[x] = parent(v[x]);
    }
    void _union(int a , int b){
        int p_a = parent(a), p_b = parent(b);

        if(p_a == p_b) return;

        v[p_a] = p_b;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        v = vector<int> (isConnected.size(),-1);

        for(int i = 0; i < isConnected.size(); i++) {
            for(int j = 0; j < isConnected.size(); j++) {
                if(isConnected[i][j]){
                    _union(i,j);
                }
            }
        }

        int result = 0;
        for(int i = 0; i < v.size(); i++) {
            if(v[i] == -1)  result++;
        }

        return result;
    }
};
// @lc code=end

