class Solution {
public:
  static bool comparator(vector<int>&a,vector<int>&b){
    if(a[0]-a[1]<b[0]-b[1])return true;
    return false;
  }
    int twoCitySchedCost(vector<vector<int>>& c) {
       sort(c.begin(),c.end(),comparator);
      int n=c.size()/2,res=0;
      for(int i=0;i<n;i++){
        res+=c[i][0]+c[i+n][1];
      }
      return res;
    }
};