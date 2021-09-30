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
int max_level = 0;
void LV_Recursive(Node *root,int level){
    if(!root)   return;

    if(max_level < level){
        cout<<root->key <<" ";
        max_level = level;
    }

    if(root->left)  LV_Recursive(root->left,level+1);
    if(root->left)  LV_Recursive(root->right,level+1)
}

void LV_Iterative(Node *root){
    if(!root)   return;
    queue<Node *> q;
    q.push(root);
    
    while(!q.empty()){
        int count = q.size();
        for(int i=0;i<count;i++){
            Node *curr = q.front();
            q.pop();
            if(i == 0)  cout<<curr->key<<" ";
            if(root->left)  q.push(root->left);
            if(root->right) q.push(root->right);
        }
    }
}

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	LV_Recursive(root);
    cout<<"\n";
    LV_Iterative(root);
}