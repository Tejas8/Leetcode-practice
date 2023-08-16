class Solution {
public:
    int maxProfit(vector<int>& p) {
        int ans=0;
        int n=p.size()-1;
        int i=n;
        if(n==0) return 0;
        int mini=i;
        int maxi=i;
        i=i-1;
        while(i>=0){
            if(p[i]>p[maxi]){
                maxi=i;
            }else{
                mini=i;
            }
            if(mini<maxi){
                ans=max(ans,p[maxi]-p[mini]);
            }
            i--;
        }
        return ans;
    }
};