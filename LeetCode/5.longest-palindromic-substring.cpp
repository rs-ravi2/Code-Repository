/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
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
    string longestPalindrome(string s) {
        int n = s.size();
        if (s.empty()) return "";
        if (n == 1) return s;
        
        int min_start = 0, max_len = 1;
        for (int i = 0; i < n;) {
          if (n - i <= max_len / 2) break;
            
          int start = i, end = i;
          while (end < n-1 && s[end+1] == s[end]) ++end;
            // Skip duplicate characters.
          i = end+1;
            
          while (end < n-1 && start > 0 && s[end + 1] == s[start - 1]) { 
              ++end; --start;
          } // Expand.
            
          int new_len = end - start + 1;
          if (new_len > max_len) { 
              min_start = start; max_len = new_len;
          }
        }
        return s.substr(min_start, max_len);
    }
};
// @lc code=end

