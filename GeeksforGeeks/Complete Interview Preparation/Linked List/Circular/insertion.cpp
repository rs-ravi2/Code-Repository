Node* insertBegin(Node* head,int data){
    Node* temp = new Node(data);
    if(!head){
        temp->next = temp;
        return temp;
    }
    
    temp->next = head->next;
    head->next = temp;
    
    int x = head->data;
    head->data = temp->data;
    temp->data = x;
    
    return head;
}

Node* insertTail(Node* head,int data){
    Node* temp = new Node(data);
    if(!head){
        temp->next = temp;
        return temp;
    }
    
    temp->next = head->next;
    head->next = temp;
    
    int x = head->data;
    head->data = temp->data;
    temp->data = x;
    
    return temp;
}