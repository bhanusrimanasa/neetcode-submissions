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
    TreeNode* check(TreeNode*root,TreeNode* p,TreeNode* q){
        if(root==nullptr)return nullptr;
        if(root==p||root==q)return root;
        TreeNode*l=check(root->left,p,q);
        TreeNode*r=check(root->right,p,q);
        if(l&&r)return root;
        if(l==nullptr)return r;
        return l;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
      return check(root,p,q);
    }
};
