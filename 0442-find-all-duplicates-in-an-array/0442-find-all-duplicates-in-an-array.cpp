class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int temp=abs(nums[i])-1;
            nums[temp]=-nums[temp];
            if(nums[temp]>0){
                ans.push_back(abs(nums[i]));
            }
        }
        return ans;
    }
};