#include<bits/stdc++.h>
using namespace std;

// A tree node
class node
{
	public:
	int data;
	node* left, *right;

	node(int data)
	{
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}
};

int sum(struct node *root)
{
    if (root == NULL)
        return 0;
    
    return sum(root->left) + root->data +
           sum(root->right);
}

int updatetree(node *root)  
{  
    // Base cases  
    if (!root)  
        return 0;  
    if (root->left == NULL && root->right == NULL)  
        return root->data;  
  
    // Update left and right subtrees  
    int leftsum = updatetree(root->left);  
    int rightsum = updatetree(root->right);  
  
    // Add leftsum to current node  
    root->data += leftsum;  
  
    // Return sum of values under root  
    return root->data + rightsum;  
} 

int updatetree2(node *root)  
{  
    // Base cases  
    if (!root)  
        return 0;  
    if (root->left == NULL && root->right == NULL)  
        return root->data;  
  
    // Update left and right subtrees  
    int leftsum = updatetree(root->left);  
    int rightsum = updatetree(root->right);  
  
    // Add leftsum to current node  
    root->data -= rightsum;  
  
    // Return sum of values under root  
    return root->data + leftsum;  
} 

// Utility function to do inorder traversal
void inorder(node* node)
{
	if (node == NULL)
		return;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}

// Driver code
int main()
{

	struct node *root = new node(10);
	root->left	 = new node(4);
	root->right = new node(6);
	root->left->left = new node(9);
	root->right->right = new node(12);
	root->right->right = new node(20);


    if(!root || root->left && !root->right || !root->left && root->right)   cout<<"Empty"<<endl;
    root->data = 0; //base case

    while(root){
        if(root->left){
            updatetree2(root);
        }
        if(root->right){
            updatetree(root);
        }
    }
	
    

	inorder(root);
	return 0;
}