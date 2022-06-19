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
        q.push(root);
        vector<vector<int>>v;
        while(!q.empty())
        {
            int n=q.size();
             vector<int>v1;
            for(int i=0;i<n;i++)
            {
                root=q.front();
                q.pop();
                v1.emplace_back(root->val);
                if(root->left!=NULL)q.push(root->left);
                if(root->right!=NULL)q.push(root->right);
                
            }
            v.emplace_back(v1);
        }
        return v;
    }
};