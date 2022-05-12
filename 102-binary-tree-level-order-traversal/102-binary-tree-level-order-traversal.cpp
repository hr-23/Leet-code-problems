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
      //first take a queue and then insert the root into queue and then insert them into queue 
// then insert the children into the queue and then pop that particular one 
 vector<vector<int>>v;
        if(root==NULL)return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v1;
            int s=q.size();
            for(int i=0;i<s;i++)
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