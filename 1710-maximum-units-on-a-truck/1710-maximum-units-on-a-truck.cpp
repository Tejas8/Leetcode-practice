class Solution {
public:
    static bool compare(vector<int>a,vector<int>b){
        if(a[1]<b[1]) return true;
        return false;
    }
    int maximumUnits(vector<vector<int>>& bt, int ts) {
        sort(bt.begin(),bt.end(),compare);
        int ans=0;
        int n=bt.size()-1;
        for(int i=n;i>=0;i--){
            if(ts>0){
                if(bt[i][0]<ts){
                ts-=bt[i][0];
                ans+=bt[i][0]*bt[i][1];
            }else{
                    ans+=ts*bt[i][1];
                    ts=0;
                    break;
                }
            }
        }
        return ans;
    }
};