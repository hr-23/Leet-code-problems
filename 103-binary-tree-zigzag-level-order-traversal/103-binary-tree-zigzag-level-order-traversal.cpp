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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>v;
        int i=0;
        if(root==NULL)return v;
        while(!q.empty())
        {
            vector<int>v1;
            int s=q.size();
            i++;
            for(int i=0;i<s;i++)
            {
                TreeNode* n=q.front();q.pop();
                if(n->left!=NULL)q.push(n->left);
                if(n->right!=NULL)q.push(n->right);
                v1.push_back(n->val);
            }
            if(i%2==0)
                reverse(v1.begin(),v1.end());
            v.push_back(v1);
        }
return v;
    }
};