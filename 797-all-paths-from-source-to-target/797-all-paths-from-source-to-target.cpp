class Solution {
public:
  void dfs(int s,int target,vector<vector<int>>& graph,vector<vector<int>>&ans,vector<int>path){
    if(s==target){
    //  path.push_back(target);
      ans.push_back(path);
      return;
    }
    for(auto j:graph[s]){
      cout<<j<<endl;
      path.push_back(j);
      dfs(j,target,graph,ans,path);
      path.pop_back();
    }
  }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
       vector<vector<int>>ans;
      int n=graph.size();
      vector<int>path;
      path.push_back(0);
      dfs(0,n-1,graph,ans,path);
      return ans;
    }
};