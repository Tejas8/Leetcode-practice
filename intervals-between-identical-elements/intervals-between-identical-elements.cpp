class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
       int n=arr.size();
        unordered_map<int,long long>count;
        unordered_map<int,long long>sum;
       vector<long long>res(n,0);
        for(int i=0;i<n;i++){
            
                res[i]+=(i*count[arr[i]])-sum[arr[i]];
                sum[arr[i]]+=i;
                count[arr[i]]++;
            
        }
        count.clear();
        sum.clear();
        for(int j=n-1;j>=0;j--){
        
             res[j]+=sum[arr[j]]-(count[arr[j]]*j);
             sum[arr[j]]+=j;
             count[arr[j]]++;
          
        }
        
    //    for(int i=0;i<n;i++){
      //      res.push_back(prefix[i]+suffix[i]);
      //  }
        return res;
    }
};