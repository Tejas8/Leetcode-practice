class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(nums.size(),0);
        dp[0]=1;
        for(int i=1;i<n;i++){
            int cnt=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                   cnt=max(cnt,dp[j]); 
                }
            }
            dp[i]=cnt+1;
        }
        int res=0;
        for(auto i:dp){
            res=max(i,res);
        }
        return res;
    }
};