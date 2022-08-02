class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();
        priority_queue<int>p;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(p.size()<k){
                    p.push(mat[i][j]);
                }else{
                    if(p.top()>mat[i][j]){
                        p.pop();
                        p.push(mat[i][j]);
                    }
                }
            }
        }
        return p.top();
    }
};