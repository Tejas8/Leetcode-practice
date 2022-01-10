class Solution {
public:
  bool palind(string s){
    int i=0;
    int j=s.size()-1;
    while(i<j){
      if(s[i]!=s[j])return false;
      i++;
    j--;
    }
    
    return true;
  }
  void fun(string prefix,string s,vector<string>till,vector<vector<string>>&res){
   if(prefix!=""){
     till.push_back(prefix);
   }
    if(s.size()==0){
      res.push_back(till);
      return;
    }
    for(int i=0;i<s.size();i++){
      string prefix=s.substr(0,i+1);
      string next=s.substr(i+1);
      if(palind(prefix)){
    //    till.push_back(prefix);
        fun(prefix,next,till,res);
      }
    }
  }
    vector<vector<string>> partition(string s) {
      vector<vector<string>>res;
      vector<string>till;
      fun("",s,till,res);
      return res;
    }
};