/*
 * @lc app=leetcode id=687 lang=cpp
 *
 * [687] Longest Univalue Path
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
    int DFS(TreeNode* root, int& result){
        if(!root) return 0;

        int left = root->left ? DFS(root->left, result) : 0;
        int right = root->right ? DFS(root->right, result) : 0;

        if(!root->left || root->left->val != root->val) left = 0;
        if(!root->right || root->right->val != root->val)   right = 0;

        result = max(result, left+right);

        return max(left, right)+1;
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root) return 0;

        int result = 0;
        DFS(root, result);
        return result;
    }
};
// @lc code=end

