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
    void fun(TreeNode* root,int &cnt,vector<int>v){
        if(!root){
         return;   
        } 
        v[root->val-1]++;
        if(!root->left&&!root->right){
            int temp=0;
            for(auto i:v){
                if(i%2!=0)temp++;
            }
            if(temp==1||temp==0) cnt++;
        }
        
        fun(root->left,cnt,v);
        fun(root->right,cnt,v);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        int cnt=0;
        vector<int>v(9,0);
        fun(root,cnt,v);
        return cnt;
    }
};