class Solution {
public:
    string removeDuplicateLetters(string a) {
        stack<char>s;
        vector<int>v(26,0);
        map<char,int>m;
        int n=a.size();
        for(int i=0;i<n;i++){
            m[a[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(s.empty()){
                s.push(a[i]);
                v[a[i]-'a']=1;
            }
            if(v[a[i]-'a']!=1){
                while(!s.empty()&&s.top()>a[i]&&m[s.top()]>i){
                v[s.top()-'a']=0;
                s.pop();
                
                }
                s.push(a[i]);
                v[a[i]-'a']=1;
            }
        }
        string ans="";
        while(!s.empty()){
            ans=ans+s.top();
            s.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};