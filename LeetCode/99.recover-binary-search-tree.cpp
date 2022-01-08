/*
 * @lc app=leetcode id=99 lang=cpp
 *
 * [99] Recover Binary Search Tree
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
    void dfs(TreeNode* root, TreeNode* &prev, TreeNode* &first, TreeNode* &end){
        if(!root)   return;
        dfs(root->left,prev,first,end);

        if(prev){
            if(root->val < prev->val){
                if(!first)  first = prev;
                end = root;
            }
        }
        prev = root;
        dfs(root->right,prev,first,end);
    }
    void recoverTree(TreeNode* root) {
        // if(!root)   return;
        TreeNode* first = NULL, *end = NULL, *prev = NULL;
        dfs(root,prev,first,end);
        swap(first->val,end->val);
        return;
    }
};
// @lc code=end