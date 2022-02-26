class Solution {
public:
  void fun(vector<int>c,int tar,vector<vector<int>>&res,vector<int>v,int i){
    if(tar<0||i<0)return;
    if(tar==0){
      res.push_back(v);
      return;
    }
    if(tar>=c[i]){
      vector<int>v1;
      v1=v;
      v1.push_back(c[i]);
      fun(c,tar-c[i],res,v1,i);
      fun(c,tar,res,v,i-1);
    }else{
      fun(c,tar,res,v,i-1);
    }
    
  }
    vector<vector<int>> combinationSum(vector<int>& c, int tar) {
      int i=c.size()-1;
        vector<vector<int>>res;
      vector<int>v;
      fun(c,tar,res,v,i);
      return res;
    }
};