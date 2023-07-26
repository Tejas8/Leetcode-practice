class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int s=0;int end=n;
        while(s<end){
            int mid=s+(end-s)/2;
            if(nums[end]-nums[mid]<end-mid){
                if(end-mid==1){
                    return nums[mid];
                }else{
                    s=mid;
                }
            }else if(nums[mid]-nums[s]<mid-s){
                if(mid-s==1)return nums[mid];
                else end=mid;
            }
        }
        return 0;
    }
};