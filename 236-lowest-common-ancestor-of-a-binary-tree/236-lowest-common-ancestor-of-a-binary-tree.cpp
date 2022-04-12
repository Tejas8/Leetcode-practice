/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
  TreeNode* find(TreeNode* root,TreeNode* a,TreeNode* b){
    if(!root) return NULL;
    if(root==a||root==b) return root;
    TreeNode* l=find(root->left,a,b);
     TreeNode* r=find(root->right,a,b);
    if(l&&r) return root;
    if(l)return l;
    return r;
  }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* lca=find(root,p,q);
      return lca;
    }
};