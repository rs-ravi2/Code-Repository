/*
 * @lc app=leetcode id=117 lang=cpp
 *
 * [117] Populating Next Right Pointers in Each Node II
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();
class Solution {
public:
    vector<Node*> nextNodes;
    
    Node* connect(Node* root) {
        if( root == nullptr) return nullptr;
        rec( root, 0);
        return root;
    }
    
    void rec( Node* node, uint16_t level) {
        if( level >= nextNodes.size()) nextNodes.push_back(nullptr);
        
        node->next = nextNodes[level];
        nextNodes[level] = node;
        
        if( node->right != nullptr) rec( node->right,level+1);
        if( node->left != nullptr) rec( node->left, level+1);
    }
};
// @lc code=end

