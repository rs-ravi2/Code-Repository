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

bool childSum(Node* root){
    if(!root)   return true;

    if(root->left == NULL && root->right == NULL)   return true;

    int sum = 0;
    if(root->left == NULL && root->right != NULL)   sum += root->right->key;
    else if(root->right == NULL && root->left != NULL)  sum += root->left->key;

    return (root->key == sum && childSum(root->left) && childSum(root->right));
}

int main() {
	
	Node *root=new Node(20);
	root->left=new Node(8);
	root->right=new Node(12);
	root->right->left=new Node(3);
	root->right->right=new Node(9);
	
	cout<<childSum(root);
}