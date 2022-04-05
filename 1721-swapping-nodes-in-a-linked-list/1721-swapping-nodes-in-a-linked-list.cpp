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
        // the standard approach of converting into vector and then swapping and then assigning the values of swapped vector will also have time complecity of o(n) but this approach is not as good 
        // here the approach is we are having three pointers which are pointing to head ,those are current left and right ,try to recall this approach 
        ListNode* left=head;
          ListNode* right=head;
          ListNode* curr=head;
        int c=1;
        while(curr!=NULL)
        {
            if(c<k)
                left=left->next;
            if(c>k)
                right=right->next;
            curr=curr->next;c++;
        }
        int temp=left->val;
            left->val=right->val;
        right->val=temp;
        return head;
        // time complexity o(n);
        // space. complecity o(1)
    }
};