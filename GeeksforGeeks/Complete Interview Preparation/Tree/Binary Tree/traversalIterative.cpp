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

void preorderIterative(Node *root){     // T(N) : O(N)  ;   Aux. Space = O(N)
    if(root==NULL)      return;

    stack<Node*> s;
    s.push(root);

    while(s.empty() != true){
        Node* curr = s.top();
        cout<<curr->key<<" ";
        s.pop();

        if(curr->right != NULL) s.push(curr->right);
        if(curr->left != NULL) s.push(curr->left); 
    }
}  

void preorderIterative2(Node *root){     // T(N) : O(N)  ;   Aux. Space = O(h)
    if(root==NULL)      return;

    stack<Node*> s;
    Node* curr = root;
    while(curr != NULL || s.empty() != true){
        while(curr != NULL){
            cout<<curr->key<<" ";

            if(curr->right != NULL) s.push(curr->right);
            curr = curr->left;
        }

        if(s.empty() == false){
            curr = s.top(); s.pop();
        }
    } 
}

// Preorder traversal without recursion and without stack 
void morrisTraversalPreorder(Node* root) 
{ 
    while (root) 
    { 
        // If left child is null, print the current node data. Move to 
        // right child. 
        if (root->left == NULL) 
        { 
            cout<<root->key<<" "; 
            root = root->right; 
        } 
        else
        { 
            // Find inorder predecessor 
            Node* current = root->left; 
            while (current->right && current->right != root) 
                current = current->right; 
  
            // If the right child of inorder predecessor already points to 
            // this node 
            if (current->right == root) 
            { 
                current->right = NULL; 
                root = root->right; 
            } 
  
            // If right child doesn't point to this node, then print this 
            // node and make right child point to this node 
            else
            { 
                cout<<root->key<<" "; 
                current->right = root; 
                root = root->left; 
            } 
        } 
    } 
}


void inorderIterative(Node *root){      // T(N) : Theta(N)  ;   Aux. Space = O(h)
    stack<Node* > s;
    Node* curr = root;
    while(curr != NULL || s.empty() == false){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top(); s.pop();
        cout<<curr->key<<" ";
        curr = curr->right;
    }
} 

void postOrderIterative(Node* root)
{
    if (root == NULL)
        return;
  
    // Create two stacks
    stack<Node *> s1, s2;
  
    // push root to first stack
    s1.push(root);
    Node* node;
  
    // Run while first stack is not empty
    while (!s1.empty()) {
        // Pop an item from s1 and push it to s2
        node = s1.top();
        s1.pop();
        s2.push(node);
  
        // Push left and right children
        // of removed item to s1
        if (node->left)
            s1.push(node->left);
        if (node->right)
            s1.push(node->right);
    }
  
    // Print all elements of second stack
    while (!s2.empty()) {
        node = s2.top();
        s2.pop();
        cout << node->key<< " ";
    }
} 

int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	
	inorderIterative(root);cout<<"\n";
    preorderIterative(root);cout<<"\n";
    preorderIterative2(root);cout<<"\n";
    morrisTraversalPreorder(root);
}