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
        unordered_set<ListNode*>s;
        ListNode* n=head;
        while(n!=NULL)
        {
            if(s.find(n)!=s.end())
                return true;
            s.insert(n);
            n=n->next;
        }
        return false;
    }
};