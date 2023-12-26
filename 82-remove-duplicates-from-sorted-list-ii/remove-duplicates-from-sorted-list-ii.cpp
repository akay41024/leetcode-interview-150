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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp;
        int d = head->val;
        if(head->next->val != d)
        {
            head->next = deleteDuplicates(head->next);
            return head;
        }
        while(head != NULL && d == head->val) head = head->next;
        return deleteDuplicates(head);
    }
};