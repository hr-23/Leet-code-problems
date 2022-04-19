/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
       if(head==NULL)return false;
        // like the same we did for to find the middle of the linked list  using two pointers fast and slow ,do the same here also initialize two pointers fast and slow and if both of them meet at the same node then there is the loop ,else there will be no loop ,another method is to use unordered set/unordred map.
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)return true;
        }
        return false;
    }
};