class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
      int j=nums.size()-1;
      int i=0,res=0;
      while(i<j){
        long temp=nums[i]+nums[j];
        if(temp==k) {
          res++;
          i++;
          j--;
        }
        else if(temp>k)j--;
        else i++;
      }
      return res;
    }
};