class Solution {
public:
    int dp[1001][1001];
    int fun(string t1,string t2,int a,int b){
        if(a>=t1.size() ||b>=t2.size()) return 0;
        if(dp[a][b]!=-1) return dp[a][b];
        if(t1[a]==t2[b]){
            dp[a][b]=max(1+fun(t1,t2,a+1,b+1),max(fun(t1,t2,a,b+1),fun(t1,t2,a+1,b)));
        }else{
            dp[a][b]= max(fun(t1,t2,a,b+1),fun(t1,t2,a+1,b));
        }
        return dp[a][b];
    }
    int longestCommonSubsequence(string t1, string t2) {
        memset(dp,0,sizeof(dp));
        int a=0;
        int b=0;
      //  dp[a][b]= fun(t1,t2,a,b);
        int ans=0;
            for(int i=1;i<=t1.size();i++){
                for(int j=1;j<=t2.size();j++){
                  //ans=max(ans,dp[i][j]);
                    if(t1[i-1]==t2[j-1]){
                     dp[i][j]=max(1+dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));   
                    }else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
        return dp[t1.size()][t2.size()];    
    }
};