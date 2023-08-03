class Solution {
public:
    map<int,vector<int>>m;
    
    void dfs(vector<int>adj[],int i,int cnt,int &ans,vector<int>vis){
        if(vis[i]) return;
        vis[i]=1;
        for(auto j:adj[i]){
            if(!vis[j]){
                dfs(adj,j,cnt+1,ans,vis);
            }
        }
        ans=max(ans,cnt);
    }
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& p) {
        vector<int>ans;
        if(n==0) return ans;
        if(n==1) {
            ans.push_back(0);
            return ans;
        }
        vector<int>adj[n];
        for(int i=0;i<p.size();i++){
            adj[p[i][0]].push_back(p[i][1]);
            adj[p[i][1]].push_back(p[i][0]);
        }
        // int ans=0;
        // vector<int>vis(n,0);
        // for(int i=0;i<n;i++){
        //     ans=0;
        //     dfs(adj,i,1,ans,vis);
        //     m[ans].push_back(i);
        // }
        // return (*m.begin()).second;
        
        queue<int>q;
        vector<int>deg(n,0);
        for(int i=0;i<n;i++){
            if(adj[i].size()==1){
                q.push(i);
            }
            deg[i]=adj[i].size();
        }
        
        int cnt=n;
        while(cnt>2){
            int size=q.size();
            cnt=cnt-size;
            while(size--){
                int temp=q.front();
                q.pop();
                for(auto j:adj[temp]){
                    --deg[j];
                    if(deg[j]==1)q.push(j);
                }
            }
        }
       
        while(!q.empty()){
            int temp=q.front();
            ans.push_back(temp);
            q.pop();
        }
      //  return vector<int>(q);
        return ans;
    }
};