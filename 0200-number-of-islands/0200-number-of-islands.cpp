class Solution {
public:
   int n=0;
    int m=0;
    bool isValid(int i,int j){
        if(i<0 ||i>=n||j<0 || j>=m ) return false;
        return true;
    }
    void dfs(vector<vector<char>>& g,int i,int j){
      //  if(g[i][j]=='*'||g[i][j]=='0') return;
        g[i][j]='*';
        int a[]={0,1,-1,0};
        int b[]={1,0,0,-1};
        for(int k=0;k<4;k++){
            int x=a[k]+i;
            int y=b[k]+j;
            if(isValid(x,y)&&!(g[x][y]=='*'||g[x][y]=='0')){
                dfs(g,x,y);
            }
        }
    }
    int numIslands(vector<vector<char>>& g) {
        int cnt=0;
         n=g.size();
        m=g[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]=='1'){
                    cnt++;
                    dfs(g,i,j);
                }
            }
        }
        return cnt;
    }
};