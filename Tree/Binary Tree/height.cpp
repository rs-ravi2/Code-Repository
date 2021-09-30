#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int height(Node *root){//```T{N} : O(N) ; Aux. Space = O{h}
//Worst case h+1 function calls in the recursion call stack hence O{h} aux space

    if(root==NULL)
        return 0;
    else
        return (1+max(height(root->left),height(root->right)));
}  

int treeHeight(Node *root)
{
    // Base Case
    if (root == NULL)
        return 0;
 
    // Create an empty queue for level order tarversal
    queue<Node *> q;
 
    // Enqueue Root and initialize height
    q.push(root);
    int height = 0;
 
    while (1)
    {
        // nodeCount (queue size) indicates number of nodes
        // at current lelvel.
        int nodeCount = q.size();
        if (nodeCount == 0)
            return height;
 
        height++;
 
        // Dequeue all nodes of current level and Enqueue all
        // nodes of next level
        while (nodeCount > 0)
        {
            Node *node = q.front();
            q.pop();
            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
            nodeCount--;
        }
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	cout<<height(root);cout<<endl;
    cout<<treeHeight(root);
}