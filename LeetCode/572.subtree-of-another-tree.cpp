/*
 * @lc app=leetcode id=572 lang=cpp
 *
 * [572] Subtree of Another Tree
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
bool compareTree(TreeNode* root, TreeNode* subRoot){
        if(root == NULL && subRoot == NULL){
            return true;
        }
        if(root && subRoot && root ->val == subRoot->val){
          return  compareTree(root->left,subRoot->left) && compareTree(root->right,subRoot->right);
        }
        return false;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL){
            return false;
        }
      
        return compareTree(root,subRoot) || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot); 
    }
};
// @lc code=end

