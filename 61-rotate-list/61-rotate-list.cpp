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
        if(!head)return head;
// first task is to make this a circular linked list so that we can just point to the particular index
        ListNode* p=head,*q=head;
        int c=1;
    while(p->next)p=p->next,c++;
      p->next=head;
        if(k%=c)
        {
            for(int i=0;i<c-k;i++)
           p=p->next;
        }
        q=p->next;
        p->next=NULL;
        return q;
     }
};