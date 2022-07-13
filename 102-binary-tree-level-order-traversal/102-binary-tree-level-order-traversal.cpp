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
    vector<vector<int>> levelOrder(TreeNode* root) {
               if(root==NULL)return {};
        queue<TreeNode*>q;
        vector<vector<int>>v;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v1;
          
            for(int i=0;i<n;i++)
            {
                 root=q.front();
                 q.pop();
                if(root->left!=NULL)q.push(root->left);
                if(root->right!=NULL)q.push(root->right);
                v1.push_back(root->val);
            }
            v.push_back(v1);
        }
        return v;
    }
};