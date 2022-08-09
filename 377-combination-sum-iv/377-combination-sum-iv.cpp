class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        //int dp[nums.size()]={0};
        vector<unsigned long long>dp(target+1,0);
        dp[0]=1;
        for(int i=1;i<=target;i++){
            for(auto j:nums){
                dp[i]=(dp[i]+(i-j<0?0:dp[i-j]));
            }
        }
        return dp[target]; 
        }
};