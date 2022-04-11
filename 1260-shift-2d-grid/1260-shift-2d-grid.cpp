class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
      int c=grid[0].size();
      vector<vector<int>>v(r,vector<int>(c));
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          int row=(i+(j+k)/c)%r;
          int col=(j+k)%c;
          v[row][col]=grid[i][j];
        }
      }
      return v;
    }
};