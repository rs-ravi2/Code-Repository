/*helper
 * @lc app=leetcode id=79 lang=cpp
 *
 * [79] Word Search
 */

// @lc code=start
class Solution {
    using str = string;
    using v = vector<vector<char>>;
    
private: 
    int rows, cols;
    bool DFS(v& board, const str& word, int i, int j, int p){
        if(p == word.size()) return true;
        if(i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] != word[p])
            return false;
        board[i][j] = 200;
        bool r =
            DFS(board, word, i + 1, j, p + 1) ||
            DFS(board, word, i - 1, j, p + 1) ||
            DFS(board, word, i, j + 1, p + 1) ||
            DFS(board, word, i, j - 1, p + 1);

        board[i][j] = word[p];
        return r;
    } 
    
public:
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size(), cols = board[0].size();
       
        if((int) word.size() > rows * cols) return false; // prune 1
        int dat[128] = {}; // prune 2
        for(const auto &v : board) for(char c : v) ++dat[c];
        for(char c : word) if(--dat[c] < 0) return false;
        
        // Prune 3: Find the longest prefix/suffix of the same character. If the longest
        // suffix is longer than the longest prefix, swap the strigns (so we are less
        // likely to have a long prefix with a lot of the same character).
        int left = word.find_first_not_of(word[0]);
        int right = rows - word.find_last_not_of(word[rows - 1]);
        if (left > right) reverse(word.begin(), word.end());

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                if(DFS(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};
// @lc code=end

