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
int count(TreeNode*root,int cnt){
   if(root==nullptr)return cnt;
    int l=count(root->left,cnt+1);
    int r=count(root->right,cnt+1);
    return max(l,r);

}
    int maxDepth(TreeNode* root) {
       
        if(root==nullptr)return 0;
         int cnt=0;
        return count(root,cnt);
    }
};
