/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;
        TreeNode* n=root;
        vector<int>v;
        while(1)
        {
            if(n!=NULL)
            {
                st.push(n);n=n->left;
            }
            else 
            {
                if(st.empty())break;
                n=st.top();st.pop();
                v.push_back(n->val);
                n=n->right;
            }
         }
        return v;
    }
};