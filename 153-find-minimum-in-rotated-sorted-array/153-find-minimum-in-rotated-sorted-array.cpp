class Solution {
public:
    int findMin(vector<int>& nums) {
        int st=0;
      int end=nums.size()-1;
     // if(nums[st]<=nums[end])return nums[st];
      int ans=INT_MAX;
      while(st<end){
        int mid=st+(end-st)/2;
        if(nums[end]>nums[mid]){
          ans=nums[mid];
          end=mid;
        }else if(nums[end]<nums[mid]){
          st=mid+1;
        }
      }
      return nums[end];
    }
};