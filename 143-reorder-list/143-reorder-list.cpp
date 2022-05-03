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
    void reorderList(ListNode* head) {
        ListNode* n=head;
        vector<int>v;
        while(n!=NULL)
        {
            v.push_back(n->val);
            n=n->next;
        }
        vector<int>p;
        if(v.size()%2==0)
        {
            for(int i=0;i<v.size()/2;i++)
            {  p.push_back(v[i]);p.push_back(v[v.size()-1-i]);}
            
        }
        else 
        {
            for(int i=0;i<v.size()/2;i++)
            {  p.push_back(v[i]);p.push_back(v[v.size()-1-i]);}p.push_back(v[v.size()/2]);
        }
        ListNode* m=head;
        int j=0;
        while(m!=NULL)
        {
            m->val=p[j];j++;m=m->next;
        }

    }
};