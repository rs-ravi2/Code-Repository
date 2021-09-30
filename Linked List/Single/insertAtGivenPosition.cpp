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

Node* insertAtGivenPosition(Node* head, int x, int pos){
    Node* temp = new Node(x);
    if(pos == 1){
        temp->next = head;
        return head;
    }

    Node* curr = head;
    for(int i=1;i<=pos-2 && curr!= NULL;i++)    curr = curr->next;

    if(curr == NULL) return head;
    
    temp->next = curr->next;
    curr->next = temp;
    return head;
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
    head = insertAtGivenPosition(head,25,2);
    printlist(head);
	return 0;
} 
