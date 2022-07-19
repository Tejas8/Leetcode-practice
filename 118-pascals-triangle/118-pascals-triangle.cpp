class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>res;
        vector<int>pre(1,1);
        res.push_back(pre);
        for(int i=2;i<=n;i++){
            int j=0;
            int k=i-1;
            vector<int>curr(i,0);
            curr[j]=1;
            curr[k]=1;
            j++;
            k--;
            while(j<i&&k>=0&&j<=k){
              curr[j]=pre[j]+pre[j-1];
              curr[k]=pre[k]+pre[k-1];
               k--;j++;
            }
           res.push_back(curr); 
            pre=curr;
        }
        return res;
    }
};