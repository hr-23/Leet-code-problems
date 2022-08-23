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
      ListNode* p;
    void insert_at_front(int data)
    {
        ListNode* temp=new ListNode();
        temp->val=data;
        temp->next=p;
        p=temp;
    }
    bool isPalindrome(ListNode* head) {
         ListNode* n=head;
        while(n!=NULL)
        {
            insert_at_front(n->val);
            n=n->next;
        }
        ListNode * a=p;
        ListNode *b=head;
        while(a && b)
        {
            if(a->val!=b->val)return false;
            a=a->next;b=b->next;
        }
        return true;
    }
};