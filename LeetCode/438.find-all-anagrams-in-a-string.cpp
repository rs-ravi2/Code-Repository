/*
 * @lc app=leetcode id=438 lang=cpp
 *
 * [438] Find All Anagrams in a String
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
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;

        vector<int> goal(26), cur(26);
        for(char c : p) goal[c - 'a']++;
        for(int i = 0; i < s.size(); i++){
            cur[s[i] - 'a']++;

            if(i >= p.size()){
                cur[s[i-p.size()] - 'a']--;
            }

            if(cur == goal){
                result.push_back(i - p.size() + 1);
            }
        }
        return result;
    }
};
// @lc code=end

