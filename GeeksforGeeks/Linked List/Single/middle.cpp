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

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

void printMiddle(Node * head){
    if(head==NULL)return;
    Node *slow=head,*fast=head; //if in case of 2 middle you want previous one then intialize fast=head->next
    while(fast!=NULL && fast->next!=NULL){ // fast!=NULL for even list and fast->next!=NULL for odd list
        slow=slow->next;                    //  fast!=NULL also ensures fast->next!=NULL never access.
        fast=fast->next->next;
    }
    cout<<slow->data;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	printlist(head);
	cout<<"Middle of Linked List: ";
	printMiddle(head);
	return 0;
} 
