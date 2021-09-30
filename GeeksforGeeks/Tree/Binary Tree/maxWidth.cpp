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

int maxWidth(Node *root){
    if(!root)   return 0;

    queue<Node *> q;
    q.push(root);
    int ans = INT_MIN;
    while(!q.empty()){
        int count = q.size();
        if(count > ans) ans = count;
        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();

            if(curr->left)  q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    }
    return ans;
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->left->left=new Node(40);
	root->left->right=new Node(50);
	root->right->left=new Node(60);
	int ans = maxWidth(root);
	cout<<ans;
}