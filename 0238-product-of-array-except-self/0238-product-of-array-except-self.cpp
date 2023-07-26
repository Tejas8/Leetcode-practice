class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>rarr(nums.size(),1);
        vector<int>larr(nums.size(),1);
        int n=nums.size();
        int temp=1;
        for(int i=n-1;i>=0;i--){
                rarr[i]=temp;
            temp=temp*nums[i];
        }
        temp=1;
        for(int i=0;i<n;i++){
            larr[i]=temp;
            temp=temp*nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=rarr[i]*larr[i];
            
        }
        return nums;
    }
};