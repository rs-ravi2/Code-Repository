/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int count=1;ListNode *slow = head;
        if(head==NULL||head->next==NULL||k==0) return head;
        for( ;slow->next; slow = slow->next){
            count++;
        }

        k %= count;

        slow->next = head;

        while(count-- > k){
            slow = slow->next;
        }

        ListNode *first = slow->next;
        slow->next = NULL;

        return first;
    }
};
// @lc code=end

