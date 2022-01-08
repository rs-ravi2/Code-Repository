/*
 * @lc app=leetcode id=110 lang=cpp
 *
 * [110] Balanced Binary Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
public:
    bool check(TreeNode* root, int &h){
        if (root == NULL){
            h = -1;
            return true;
        }
        int left, right;
        if (check(root->left, left) and check(root->right, right) and abs(left-right) < 2){
            h = max(left, right)+1;
            return true;
        }
        return false;        
    }
    bool isBalanced(TreeNode* root) {
        int height;
        return check(root, height);
    }
};
// @lc code=end

