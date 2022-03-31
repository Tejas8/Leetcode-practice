class Solution {
  boolean check(int[] nums,int m,int cnt){
    int ans=1;
    int sum=0;
    for(int i=0;i<nums.length;i++){
       sum+=nums[i];
      if(sum>cnt){
        ans++;
        sum=nums[i];
      }
    }
    if(ans>m)return false;
    return true;
  }
    public int splitArray(int[] nums, int m) {
     int sum=0;
      int max=0;
      for(int i=0;i<nums.length;i++){
        if(nums[i]>max) max=nums[i];
        sum+=nums[i];
      }
      int lo=max;
      int hi=sum;
      int ans=Integer.MAX_VALUE;
      while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(check(nums,m,mid)){
          ans=mid;
          hi=mid-1;
        }else{
          lo=mid+1;
        }
      }
      return ans;
    }
}