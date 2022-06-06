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
       unordered_set<ListNode*>s;
        int c=0;
        while(headA!=NULL)
        {
            s.insert(headA);
    headA=headA->next;c++;
        }
        while(headB!=NULL)
        {
            c++;
            s.insert(headB);
            if(s.size()!=c)return headB;
            headB=headB->next;
        }
return headA;
    }
};