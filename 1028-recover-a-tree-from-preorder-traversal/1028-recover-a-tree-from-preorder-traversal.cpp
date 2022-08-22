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
    TreeNode* recoverFromPreorder(string t) {
        int n=t.size();
        if(n==0) return NULL;
        vector<TreeNode*>v(10000,NULL);
        int cnt=0;
        int p=0;
        for( p=0;p<n;p++){
                    if(t[p]=='-')break;
                }
        v[0]=new TreeNode(stoi(t.substr(0,p)));
        
        for(long long i=p;i<n;i++){
            if(t[i]=='-'){
                cnt++;
            }else{
                long long k=i;
                long long temp=0;
              //  while(t[k]!='-'){
                //    temp=temp*10+(t[k]-'0');
               //     k++;
               // }
                for(;k<n;k++){
                    if(t[k]=='-')break;
                }
                v[cnt]=new TreeNode(stoi(t.substr(i,k-i)));
                if(!(v[cnt-1]->left)){
                    v[cnt-1]->left=v[cnt];
                }else{
                    v[cnt-1]->right=v[cnt];
                }
                --k;
                i=k;
                cnt=0;
            }
        }
        return v[0];
    }
};