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

void printlist(Node *head){ // T(N) : O(N); Aux. Space = O(1)
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

void recursivePrintList(Node* head){ // T(N) : O(N); Aux. Space = O(N)
    if(head == NULL)    return;

    cout<<head->data<<" ";
    recursivePrintList(head->next);
}

int searchList(Node* head, int x){  // T(N) : O(N); Aux. Space = O(1)
    Node* curr = head;
    int pos = 1;
    while(curr != NULL){
        if(curr == x)   return pos;

        curr = curr->next;
        pos++;
    }
    return -1;
}

int recursiveSearchList(Node* head,int x){ // T(N) : O(N); Aux. Space = O(N)
    if(head == NULL)  return -1;
    else if(head == x)  return  1;

    else{
        int res = recursiveSearchList(head->next,x);
        if(res == -1)   return -1;
        else return res+1;
    }
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	printlist(head);
    cout<<"Position of element in Linked List: "<<searchList(head,20);
	return 0;
} 
