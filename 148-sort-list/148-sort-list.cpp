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
    ListNode* sortList(ListNode* head) {
        vector<int>v;
        ListNode* n=head;
        while(n!=NULL)
        {
            v.push_back(n->val);
            n=n->next;
        }
        sort(v.begin(),v.end());
        ListNode* m=head;
       int i=0;
        while(m!=NULL)
        {
            m->val=v[i];i++;
            m=m->next;
        }
        return head;
    }
};