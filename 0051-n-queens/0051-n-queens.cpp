class Solution {
public:
    vector<string>s;
    vector<vector<string>>ans;
    bool isValid(int i,int j,int n){
        for(int x=i,y=j;x>=0&&y>=0;x--,y--){
            if(s[x][y]=='Q') return false;
        }
        for(int x=i,y=j;x>=0&&y<n;x--,y++)if(s[x][y]=='Q') return false;
        for(int x=0;x<i;x++) if(s[x][j]=='Q') return false;
        for(int y=0;y<j;y++) if(s[i][y]=='Q') return false;
        return true;
            
    }
     void fun(int i,int n){
        if(i>=n) {
            ans.push_back(s);
            return;
        }
         for(int j=0;j<n;j++){
             if(isValid(i,j,n)){
                 s[i][j]='Q';
                 fun(i+1,n);
                 s[i][j]='.';
             }
         }
    }
    vector<vector<string>> solveNQueens(int n) {
        string temp="";
        for(int i=0;i<n;i++)temp.push_back('.');
        for(int i=0;i<n;i++){
            s.push_back(temp);
        }
        int i=0;
        fun(i,n);
        return ans;
    }
};