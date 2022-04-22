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
      vector<int>v;
        ListNode* n=head;
        while(n!=NULL)
        {
            v.push_back(n->val);n=n->next;
        }
 k%=v.size();
        vector<int>v1;
        for(int i=v.size()-k;i<v.size();i++)
            v1.push_back(v[i]);
        for(int i=0;i<v.size()-k;i++)
              v1.push_back(v[i]);
        ListNode* p=head;
        int i=0;
        while(p!=NULL)
        {
            p->val=v1[i];i++;p=p->next;
        }
        return head;
     }
};