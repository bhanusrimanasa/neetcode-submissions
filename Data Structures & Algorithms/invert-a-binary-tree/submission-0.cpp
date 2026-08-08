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
    void invert(TreeNode*root){
        if(root==nullptr)return;
        TreeNode*l=root->left;
        TreeNode*r=root->right;
        invert(l);
        invert(r);
        root->left=r;
        root->right=l;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
