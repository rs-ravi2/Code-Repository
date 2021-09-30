Node* reverseDLL(Node* head){

    if(head == NULL || head->next){
        return head;
    }
    Node* curr =  head;Node* prev = NULL;
    while(!curr){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }

    return prev->prev;
}