static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};


ListNode* intersection(ListNode *l1, ListNode *l2){
    ListNode* a = l1, *b = l2;
    while(a && b && a->val != b->val){
        a = a->next;
        b = b->next;

        if(a == b)    return a;

        if(!a) a = l2;
        if(!b) b = l1;
    }

    return a;
}