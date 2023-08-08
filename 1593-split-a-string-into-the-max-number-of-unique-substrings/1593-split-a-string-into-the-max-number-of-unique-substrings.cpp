class Solution {
public:
    unordered_set<string>st;
    int ans=0;
    void fun(string s){
        if(1>=s.size()){
            ans=max(ans,(int)st.size());
            return;
        }
        
        for(int j=1;j<s.size();j++){
        string temp=s.substr(0,j);
        if(st.find(temp)!=st.end()) continue;
        else{
            st.insert(temp);
            st.insert(s.substr(j));
            ans=max(ans,(int)st.size());
            st.erase(s.substr(j));
            fun(s.substr(j));
            st.erase(temp);
        }    
        }
        
    }
    int maxUniqueSplit(string s) {
        int n=s.size();
        
      //  int i=1;
        fun(s);
        return ans;
    }
};