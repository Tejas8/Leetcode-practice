class Solution {
public:
  int t[20001]; 
  int fun(vector<int>nums,int i){
    if(i>=nums.size())return 0;
    if(t[i]!=-1)return t[i];
    int curr_sum=nums[i];
    int curr_val=nums[i];
    int index=i+1;
    while(index<nums.size()&&curr_val==nums[index]){
      curr_sum+=nums[index];
      index++;
    }
    while(index<nums.size()&&curr_val==nums[index]-1){
      index++;
    }
    return t[i]=max(curr_sum+fun(nums,index),fun(nums,i+1));
  }
    int deleteAndEarn(vector<int>& nums) {
        memset(t,-1,sizeof(t));
      sort(nums.begin(),nums.end());
      return fun(nums,0);
    }
};