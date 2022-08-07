class Solution {
public:
    
    long long countBadPairs(vector<int>& nums) {
        int n=nums.size();
      //  int diff[1e5+1]={0};
        long long cnt=0;
        unordered_map<int,int>m;
        long long tot=(long long)n*(n-1)/2;
        cout<<tot<<endl;
       // tot=tot-n;
            for(int i=0;i<n;i++){
                cnt+=m[i-nums[i]];
                m[i-nums[i]]++;
                
               // nums[i]=i-nums[i];
            }
    
        
        return tot-(cnt);
    }
};