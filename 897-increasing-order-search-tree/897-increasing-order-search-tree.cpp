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
  TreeNode*  pre=NULL;
  void increasingBSTu(TreeNode* root,TreeNode* &head){
   // static TreeNode* head=NULL;
       
      if(!root) return ;
      increasingBSTu(root->left,head);
      if(!pre){
        head=root;
      }else{
        pre->right=root;
        root->left=NULL;
      }
      pre=root;
      increasingBSTu(root->right,head);
  }
    TreeNode* increasingBST(TreeNode* root) {
      TreeNode* head=NULL;  
      increasingBSTu(root,head);
      return head;
    }
};