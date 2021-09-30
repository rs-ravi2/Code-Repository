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

Node* sortedInsert(Node* head,int x){ // T(N) : Theta(pos)
    Node* temp = new Node(x);
    if(head == NULL){
        return temp;
    }
    if(x < head->data){
        temp->next = head;
        return temp;
    }

    Node* curr = head;
    while(curr->next->data < x && curr->next != NULL){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

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
    cout<<endl;
}
int main() 
{ 
	Node *head=NULL;
	head=insertBegin(head,30);  // Obtained list would have elements in the reverse order 
	head=insertBegin(head,20);  // i.e 10 20 30 
	head=insertBegin(head,10);
	printlist(head);
    head = sortedInsert(head,25);
    printlist(head);
	return 0;
} 
