class Solution {
public:
    void fun(TreeNode* root,map<int,map<int,vector<int>>>&m,int x,int y)
    {
        if(root==NULL)
        {
            return;
        }
        m[x][y].push_back(root->val);
        fun(root->left,m,x-1,y+1);
        fun(root->right,m,x+1,y+1);
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,vector<int>>>m;
        vector<vector<int>>ans;
        fun(root,m,0,0);
        for(auto x:m)
        {
            vector<int>temp;
            for(auto y:x.second)
            {
                sort(y.second.begin(),y.second.end());
                for(auto k:y.second)
                {
                    temp.push_back(k);
                }
            }
            ans.push_back(temp);
            
        }
        return ans;
    }
}; 