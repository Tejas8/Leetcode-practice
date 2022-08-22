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
    int p;
    int find(int val,vector<int>in){
        for(int i=0;i<in.size();i++){
            if(in[i]==val)return i;
        }
        return 0;
    }
    TreeNode* fun(vector<int>& in, vector<int>& po,int st,int end){
        if(p<0||st>end)return NULL;
        int ind=find(po[p],in);
        --p;
        TreeNode* root=new TreeNode(in[ind]);
        if(st==end)return root;
        root->right=fun(in,po,ind+1,end);
        root->left=fun(in,po,st,ind-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& in, vector<int>& po) {
         p=po.size()-1;
        int end=in.size()-1;
        return fun(in,po,0,end);
    }
};