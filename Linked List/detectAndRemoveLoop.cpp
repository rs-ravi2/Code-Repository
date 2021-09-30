Node* detectAndRemove (Node* head){
    Node* slow = head,  *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { 
            break; 
        }
    }
    if(slow==fast)
    slow = head;
    
    while(slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }

    fast->next = NULL;
    return head;
}