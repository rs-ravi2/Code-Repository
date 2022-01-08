int length(ListNode* head){
    int length = 0;
    while(head){
        length ++;
        head = head->next;
    }
    return length;
}