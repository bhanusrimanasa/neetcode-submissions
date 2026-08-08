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
    bool check(TreeNode*root,int &prev){
        if(root==nullptr)return true;
        if(!check(root->left,prev))return false;
        if(root->val<=prev)return false;
        prev=root->val;
        if(!check(root->right,prev))return false;
        return true;
        
    }
    bool isValidBST(TreeNode* root) {
        int prev=INT_MIN;
        return check(root,prev);
    }
};
