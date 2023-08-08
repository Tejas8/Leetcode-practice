class Solution {
public:
    unordered_set<string>st;
    int ans=0;
    void fun(string s,int i){
        if(i>=s.size()){
            ans=max(ans,(int)st.size());
            return;
        }
        
        for(int j=i;j<s.size();j++){
        string temp=s.substr(0,j);
        if(st.find(temp)!=st.end()) continue;
        else{
            st.insert(temp);
            st.insert(s.substr(j));
            ans=max(ans,(int)st.size());
            st.erase(s.substr(j));
            fun(s.substr(j),1);
            st.erase(temp);
        }    
        }
        
    }
    int maxUniqueSplit(string s) {
        int n=s.size();
        
        int i=1;
        fun(s,i);
        return ans;
    }
};