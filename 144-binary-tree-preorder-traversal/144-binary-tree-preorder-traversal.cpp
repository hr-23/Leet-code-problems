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
    vector<int>v;
    void preorder(TreeNode* n)
    {
        if(n==NULL)return;
        v.push_back(n->val);
        preorder(n->left);
        preorder(n->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
      preorder(root);
        return v;
    }
};