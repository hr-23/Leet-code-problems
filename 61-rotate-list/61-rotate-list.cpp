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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)return head;
        ListNode* tail=head;
        ListNode* h=head;
        int c=1;
        while(tail->next)
        {
            tail=tail->next;c++;
        }
    tail->next=head;
        if(k%=c)
        {
            for(int i=0;i<c-k;i++)tail=tail->next;
        }
        h=tail->next;
        tail->next=NULL;
        return h;
     }
};