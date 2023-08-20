class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,INT_MAX);
        v[0]=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<=min(n-1,i+nums[i]);j++){
                v[j]=min(v[j],v[i]+1);
            }
        }
        return v[n-1]==INT_MAX? -1:v[n-1];
    }
};