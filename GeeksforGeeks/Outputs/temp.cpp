Node* reverse(Node* head, int k)
{
    if (!head)
        return NULL;
    Node* curr = head;
    Node* next = NULL;
    Node* prev = NULL;
    int count = 0;
 
    
    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL)
        head->next = reverse(next, k);

    return prev;
}