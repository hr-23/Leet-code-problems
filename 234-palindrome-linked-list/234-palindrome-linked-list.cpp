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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode* n=head;
        while(n!=NULL)
        {
            v.emplace_back(n->val);n=n->next;
        }
        vector<int>s(v.begin(),v.end());
        reverse(v.begin(),v.end());
        if(s==v)return true;
        return false;
    }
};