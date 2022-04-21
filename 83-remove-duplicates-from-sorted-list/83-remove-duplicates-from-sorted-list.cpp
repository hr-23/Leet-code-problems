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
// always remember to write the condition about edge cases like when head is NULL
        if(head==NULL)return head;
    // initialize two pointers p and t which points to current and next of head and a pre which is the value of the p;
        ListNode* cur = head;
        while(cur) {
        	while(cur->next && cur->val == cur->next->val) {
        		cur->next = cur->next->next;
        	}
        	cur = cur->next;
        }
        return head;
    }
};