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
   int maxdiameter(TreeNode* root,int &d)
   {
       if(root==NULL)return 0;
       int lh=maxdiameter(root->left,d);
       int rh=maxdiameter(root->right,d);
       d=max(d,lh+rh);
       return 1+max(lh,rh);
       
   }
    int diameterOfBinaryTree(TreeNode* root) {
            int d=0;
        maxdiameter(root,d);
        return d;
    }
};