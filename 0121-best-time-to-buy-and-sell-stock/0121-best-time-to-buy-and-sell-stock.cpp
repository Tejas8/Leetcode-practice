class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1||prices.size()==1) return 0;
        int ans=0;
        int l=prices[prices.size()-1];
        for(int  i=prices.size()-2;i>=0;i--){
            if(prices[i]>l){
                l=prices[i];
            }else{
                ans=max(ans,l-prices[i]);
            }
        }
        return ans;
    }
};