Node* insertBegin(Node* head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev = temp;
    return temp;    
}

Node* insertTail(Node* head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    temp->prev = head->prev;
    temp->next = head;
    head->prev = temp;
    return head;    
}