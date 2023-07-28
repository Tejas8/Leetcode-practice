class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mdiff=INT_MAX;
        int ans=0;
        for(int i=0;i<n-1;i++){
            int a=i+1;
            int b=n-1;
            while(a<b){
                int sum=nums[i]+nums[a]+nums[b];
                int diff=abs(target-sum);
                if(mdiff>diff){
                    mdiff=min(mdiff,diff);
                  ans=sum;  
                }
                if(diff==0){
                    return sum;
                }else if(target-sum>0){
                    a++;
                }else{
                    b--;
                }
            }
        }
        return ans;
    }
};