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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        int c=0;
    ListNode* n=head;
        while(n!=NULL)
        {
            c++;
          v.push_back(n->val);n=n->next;
        }
    swap(v[k-1],v[c-k]);
        ListNode* m=head;
    int i=0;
        while(m!=NULL)
        {
            m->val=v[i];i++;m=m->next;
        }
        return head;
    }
};