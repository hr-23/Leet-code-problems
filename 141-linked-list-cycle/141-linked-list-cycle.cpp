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
    unordered_set<ListNode*>st;
        ListNode* n=head;
        while(n!=NULL)
        {
            if(st.find(n)!=st.end())return true;
            st.insert(n);
            n=n->next;
        }
        return false;
    }
};