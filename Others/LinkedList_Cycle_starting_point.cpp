    ListNode* detectCycle(ListNode* head){
        ListNode* slow = head, *fast = head;
        while(slow && fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow)    return slow->next;
        }
    }