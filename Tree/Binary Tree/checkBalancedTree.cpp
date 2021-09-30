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

int balance(Node *root){
    if(!root)   return 0;
    int h1 = balance(root->left);
    int h2 = balance(root->right);

    if(h1 == -1 || h2 == -1)    return -1;

    if(abs(h1-h2) <= 1) return 1+max(h1,h2);
    else return -1;
}

int main() {
	
	Node *root=new Node(20);
	// root->left=new Node(8);
	root->right=new Node(12);
	// root->right->left=new Node(4);
	root->right->right=new Node(9);
	
	cout<<balance(root);
}