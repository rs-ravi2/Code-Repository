/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
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
    bool backspaceCompare(string s, string t) {
        string s1;
        for( char c:s )
            if( c == '#' && s1.size() )
                s1.pop_back();
            else if( c != '#')
                s1.push_back(c);
        
        string s2;
        for( char c : t )
            if( c == '#' && s2.size() )
                s2.pop_back();
            else if( c != '#')
                s2.push_back(c);
        
        cout << s1 << endl;cout << s2 << endl;
        
        return s1 == s2;
    }
};
// @lc code=end

