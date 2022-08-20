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
   void insert_at_front(ListNode** head2,int x)
{
    ListNode* temp=new ListNode();
    temp->val=x;
    temp->next=*head2;
    *head2=temp;
}
    bool isPalindrome(ListNode* head) {
          ListNode* head2;
        ListNode* n=head;
        while(n)
        {
            insert_at_front(&head2,n->val);n=n->next;
        }
        ListNode* t=head;
        ListNode* p=head2;
        while(t)
        {
            if(t->val!=p->val)return false;t=t->next;p=p->next;
        }
        return true;
    }
};