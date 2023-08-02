class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& p) {
        vector<int>adj[n+1];
        int k=p.size();
        vector<int>ans;
        int cnt=0;
        queue<int>q;
        for(int i=0;i<k;i++){
            adj[p[i][1]].push_back(p[i][0]);
        }
        vector<int>ind(n,0);
        for(int i=0;i<n;i++){
            for(auto j:adj[i]){
                ind[j]++;
            }
        }
        for(int i=0;i<n;i++){
            if(ind[i]==0)q.push(i);
        }
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            cnt++;
            for(auto i:adj[temp]){
                --ind[i];
                if(ind[i]==0){
                    q.push(i);
                }
            }
        }
        if(cnt==n){
            return ans;
        }else{
            return vector<int>();
        }
        
    }
};