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
        int c=1;
        ListNode* p=head;
        ListNode* q=head;
        while(p->next)
        {
            p=p->next;c++;
        }
        p->next=head;
       if(k%=c)for(int i=0;i<c-k;i++)p=p->next;
        q=p->next;
       p->next=0;
        return q;
    }
};