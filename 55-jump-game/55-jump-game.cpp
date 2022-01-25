class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_pos=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        if(max_pos<i) return false;
        max_pos=max(max_pos,i+nums[i]);
        if(max_pos>=n-1) return true;
        cout<<max_pos<<endl;
      }
      return false;
    }
};