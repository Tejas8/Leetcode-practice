class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int>adj(2*edges.size(),0);
      for(auto i:edges){
        adj[i[0]]++;
         adj[i[1]]++;
      }
      int n=edges.size();
      for(int i=0;i<adj.size();i++){
       // cout<<adj[i].size()<<endl;
        if(adj[i]==n){
          return i;
        }
      }
      return 0;
    }
};