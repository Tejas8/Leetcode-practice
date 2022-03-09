class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      vector<int>res;
      vector<int>deg(n,0);
        for(auto j:edges){
          deg[j[1]]++;
        }
      for(int j=0;j<deg.size();j++){
        if(deg[j]==0){
          res.push_back(j);
        }
      }
      return res;
    }
};