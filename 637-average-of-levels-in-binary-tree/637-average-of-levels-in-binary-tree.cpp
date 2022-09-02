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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>ans;
        if(!root) return ans;
        q.push(root);
        ans.push_back((double(root->val)));
        while(q.size()!=0){
            int n=q.size();
            double cnt=0.0;
            double sum=0.0;
            while(n--){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left){
                    cnt++;
                    q.push(temp->left);
                    sum+=(double)temp->left->val;
                }
                if(temp->right){
                    cnt++;
                    q.push(temp->right);
                    sum+=(double)temp->right->val;
                }
            }
            if(cnt!=0){
            ans.push_back(sum/cnt);
            }
        }
        return ans;
    }
};