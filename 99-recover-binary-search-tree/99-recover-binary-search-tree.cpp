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
  void inorder(TreeNode* root,vector<int>&v){
    if(!root)  return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
  }
  void res(TreeNode*root,vector<int>v,int &i){
    //static int i=0;
    if(!root) return;
    res(root->left,v,i);
    root->val=v[i];
    i++;
    res(root->right,v,i);
  }
    void recoverTree(TreeNode* root) {
      int i=0;
       vector<int>v;
      inorder(root,v);
      sort(v.begin(),v.end());
      res(root,v,i);
    }
};