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

Node *recRevL(Node *head){
    if(head==NULL||head->next==NULL) return head; //n  to 1
    Node *rest_head=recRevL(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}

Node *recRevL2(Node *curr,Node *prev){ //1 to n
    if(curr==NULL)return prev;
    Node *next=curr->next;
    curr->next=prev;
    return recRevL(next,curr);
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	printlist(head);
	head=recRevL(head);
	printlist(head);
    head=recRevL2(head);
	printlist(head);
	return 0;
} 
