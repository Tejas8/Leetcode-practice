class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto i:arr){
            m[i]=x-i;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:arr){
            if(pq.size()<k){
                pq.push({abs(x-i),i});
            }else{
                pair<int,int>temp=pq.top();
                if(temp.first>abs(x-i)||(temp.first==abs(x-i) &&temp.second>i)){
                    pq.pop();
                    pq.push({abs(x-i),i});
                }
            
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};