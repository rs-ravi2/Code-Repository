/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    string minWindow(string s, string t) {
        string res;
        if(s.empty() || t.empty())  return res;

        unordered_map<char, int> mp;
        unordered_map<char, int> window;

        for(int i = 0; i <t.length(); i++) {
            mp[t[i]]++;
        }

        int minL=INT_MAX;
        int letter_Count = 0, slow=0;

        for(int i = 0; i < s.length(); i++) {
            char c = s[i];
            if(mp.find(c) != mp.end()) {
                window[c] += 1;
                if(window[c] <= mp[c])  letter_Count++;
            }

            if(letter_Count >= t.length()) {
                while(mp.find(s[slow]) == mp.end() || window[s[slow]] > mp[s[slow]]){
                    window[s[slow]]--;
                    slow++;
                }

                if(i-slow + 1 < minL) {
                    minL = i-slow + 1;
                    res  = s.substr(slow, minL);
                }
            }
        }
        return res;
    }
};
// @lc code=end

