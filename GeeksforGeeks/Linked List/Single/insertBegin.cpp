#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){ // T(N) : O(1)
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main() 
{ 
	Node *head=NULL;
	head=insertBegin(head,30);  // Obtained list would have elements in the reverse order 
	head=insertBegin(head,20);  // i.e 10 20 30 
	head=insertBegin(head,10);
	printlist(head);
	return 0;
} 
