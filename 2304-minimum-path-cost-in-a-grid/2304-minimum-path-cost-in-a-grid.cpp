class Solution {
public:
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
      int m=grid.size();
      int n=grid[0].size();
      int ans=INT_MAX;
      vector<vector<int>>cost(m,vector<int>(n,INT_MAX));
      cost[0]=grid[0];
       for(int i=1;i<m;i++){
         for(int j=0;j<n;j++){
           for(int k=0;k<n;k++){
             cost[i][k]=min(cost[i][k],grid[i][k]+cost[i-1][j]+moveCost[grid[i-1][j]][k]);
             
           }
         }
       }
      for(auto i:cost[m-1]){
        ans=min(ans,i);
      }
      return ans;
    }
};