class Solution {
public:
    string simplifyPath(string path) {
      stack<string>s;
      string res="";
      for(int i=0;i<path.size();i++){
        if(path[i]=='/')
          continue;
      
          string temp="";
          while(i<path.size()&&path[i]!='/'){
            temp.push_back(path[i]);
            i++;
          }
          cout<<temp<<endl;
          if(temp==".") continue;
          else if(temp==".."){
            if(!s.empty()){
              s.pop();
            }
          }else{
            s.push(temp);
          }
        
      }
      while(!s.empty()){
        res="/"+s.top()+res;
        s.pop();
      }
      if(res.size()==0){
        res="/";
      }
        return res;
    }
};