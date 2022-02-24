class Solution {
public:
  static bool compare(vector<int>a,vector<int>b){
    if(a[0]<b[0]){
      return true;
    }
    if(a[0]==b[0]){
      if(a[1]>=b[1]) return true;
      return false;
    }
    return false;
  }
    int removeCoveredIntervals(vector<vector<int>>& in) {
        sort(in.begin(),in.end(),compare);
      stack<pair<int,int>>s;
      s.push({in[0][0],in[0][1]});                                
      for(int i=1;i<in.size();i++){
        int a=s.top().first;
        int b=s.top().second;
        if(in[i][0]>=a&&in[i][1]<=b){
          continue;
        }else{
          s.push({in[i][0],in[i][1]});
        }
      }
      return s.size();
    }
};