class Solution {
public:
    set<vector<int>>ans;
    int n;
    void fun(vector<int>& nums,int i,int val,vector<int>v){
        if(i==n){
            if(v.size()>=2){
                ans.insert(v);
            }
            return;
        }
        if(nums[i]>=val){
            vector<int>temp=v;
            temp.push_back(nums[i]);
             fun(nums,i+1,val,v);
            fun(nums,i+1,nums[i],temp);
        }else{
            fun(nums,i+1,val,v);
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        n=nums.size();
        vector<vector<int>>ans1;
        vector<int>v;
        fun(nums,0,-101,v);
        for(auto i:ans){
            ans1.push_back(i);
        }
        return ans1;
    }
};