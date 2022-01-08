ListNode* reverse(ListNode* head)
{
    if(!head) return head;

    ListNode* current = head, *temp = NULL;
    while(current) {
        current->next = temp;
        temp = current;
        current = head;
        if(head)    head = head->next;
    }
    return temp;
}
