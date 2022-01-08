/*
 * @lc app=leetcode id=1578 lang=cpp
 *
 * [1578] Minimum Deletion Cost to Avoid Repeating Letters
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
    struct node{
        char c;
        int val;
    };

    int minCost(string s, vector<int>& cost) {
        stack<node> stack;
        int n = s.size(), result = 0;

        for(int i = 0; i < n; i++){
            if(!stack.empty() && stack.top().c == s[i]){
                if(stack.top().val < cost[i]){
                    result += stack.top().val;
                    stack.pop();
                    stack.push({s[i], cost[i]});
                }
                else result += cost[i];
            }
            else{
                stack.push({s[i], cost[i]});
            }
        }
        return result;
    }
};
// @lc code=end

