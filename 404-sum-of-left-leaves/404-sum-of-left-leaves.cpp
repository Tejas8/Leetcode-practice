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
    int sum=0;
    bool fun(TreeNode* root){
        if(!root) return false;
        if(!root->left&&!root->right) return true;
        bool l=fun(root->left);
        bool r=fun(root->right);
        if(l)sum+=root->left->val;
        return false;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool temp=fun(root);
        return sum;
    }
};