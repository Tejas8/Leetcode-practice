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
  void fun(TreeNode* root,int &k,TreeNode** ans){
    if(!root) return;
    fun(root->left,k,ans);
    if(k==1){
      *ans=root;
    }
    k--;
    fun(root->right,k,ans);
  }
    int kthSmallest(TreeNode* root, int k) {
        TreeNode* ans=NULL;
      fun(root,k,&ans);
      return ans->val;
    }
};