/*
 * @lc app=leetcode id=147 lang=cpp
 *
 * [147] Insertion Sort List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
static const auto fastIO = []() {
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
return 0;
}();

class Solution {
    public:
        ListNode* insertionSortList(ListNode* head) {
            ListNode* dummy = new ListNode(0);
            dummy -> next = head;
            ListNode *pre = dummy, *cur = head;
            while (cur) {
                if ((cur -> next) && (cur -> next -> val < cur -> val)) {
                    while ((pre -> next) && (pre -> next -> val < cur -> next -> val)) {
                        pre = pre -> next;
                    }
                    ListNode* temp = pre -> next;
                    pre -> next = cur -> next;
                    cur -> next = cur -> next -> next;
                    pre -> next -> next = temp;
                    pre = dummy;
                }
                else {
                    cur = cur -> next;
                }
            }
            return dummy -> next;
        }
};
// @lc code=end

