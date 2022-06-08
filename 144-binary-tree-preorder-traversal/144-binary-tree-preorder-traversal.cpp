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
    vector<int> preorderTraversal(TreeNode* root) {
   vector<int>v;
        if(root==NULL)return {};
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty())
        {
             TreeNode* q=st.top();st.pop();
            v.push_back(q->val);
            if(q->right!=NULL)st.push(q->right);
            if(q->left!=NULL)st.push(q->left);
        }
        return v;
    }
};