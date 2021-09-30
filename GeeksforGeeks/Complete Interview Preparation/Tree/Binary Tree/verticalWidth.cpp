#include <bits/stdc++.h>
using namespace std;
  
// A Binary Tree Node
struct Node
{
    int data;
    struct Node *left, *right;
};
  
// get vertical width
void lengthUtil(Node* root, int &maximum,
                int &minimum, int curr=0)
{
    if (root == NULL)
        return;
  
    // traverse left
    lengthUtil(root->left, maximum,
               minimum, curr - 1);
  
    // if curr is decrease then get
    // value in minimum
    if (minimum > curr)
        minimum = curr;
  
    // if curr is increase then get
    // value in maximum
    if (maximum < curr)
        maximum = curr;
  
  
    // traverse right
    lengthUtil(root->right, maximum,
               minimum,  curr + 1);
  
}
  
int getLength(Node* root)
{
    int maximum = 0, minimum = 0;
    lengthUtil(root, maximum, minimum, 0);
  
    // 1 is added to include root in the width
    return (abs(minimum) + maximum) + 1;
}
  
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* curr = new Node;
    curr->data = data;
    curr->left = curr->right = NULL;
    return curr;
}
  
// Driver program to test above functions
int main()
{
  
    Node* root = newNode(7);
    root->left = newNode(6);
    root->right = newNode(5);
    root->left->left = newNode(4);
    root->left->right = newNode(3);
    root->right->left = newNode(2);
    root->right->right = newNode(1);
  
    cout << getLength(root) << "\n";
  
    return 0;
}