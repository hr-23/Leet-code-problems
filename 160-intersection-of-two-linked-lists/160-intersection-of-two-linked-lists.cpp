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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set<ListNode*>st;
        ListNode* n1=headA;
        while(n1!=NULL)
        {
          st.insert(n1);
            n1=n1->next;
        }
        ListNode* n2=headB;
        while(n2!=NULL)
        {
             if(st.find(n2)!=st.end())return n2;n2=n2->next;
         }
        return NULL;
    }
};