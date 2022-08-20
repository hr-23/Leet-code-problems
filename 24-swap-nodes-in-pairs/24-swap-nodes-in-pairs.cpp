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
    void swap(ListNode* head)
    {
        if(head==NULL)return ;
        int t=head->val;
        if(head->next!=NULL)
        head->val=head->next->val;
        if(head->next!=NULL)
        head->next->val=t;
        if(head->next!=NULL)
        swap(head->next->next);
    }
    ListNode* swapPairs(ListNode* head) {
        swap(head);
      return head;
    }
};