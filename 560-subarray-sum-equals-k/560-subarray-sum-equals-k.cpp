class Solution {
public:
    
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>m;
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]+nums[i];
        }
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k)cnt++;
            if(m.find(nums[i]-k)!=m.end()){
                cnt+=m[nums[i]-k];
            }
            m[nums[i]]++;
        }
        return cnt;
     }
};