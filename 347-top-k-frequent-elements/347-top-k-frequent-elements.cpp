class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //vector<pair<int,int>>v;
      unordered_map<int,int>m;
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
      vector<int>res;
      for(int i=0;i<nums.size();i++){
        m[nums[i]]++;
      }
     for(auto i:m){
      pq.push({i.second,i.first});
       if(pq.size()>k){
         pq.pop();
       }
     }
     while(pq.size()>0){
       res.push_back(pq.top().second);
       pq.pop();
     } 
      return res;
    }
};