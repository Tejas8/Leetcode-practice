class Solution {
public:
    int jump(vector<int>& nums) {
        int curReach=0;
      int maxReach=0;
      int jump=0;
      for(int i=0;i<nums.size()-1;i++){
        maxReach=max(maxReach,nums[i]+i);
        if(curReach==i){
          curReach=maxReach;
          jump++;
        }
      }
      return jump;
    }
};