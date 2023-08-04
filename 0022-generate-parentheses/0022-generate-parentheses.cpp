class Solution {
public:
    vector<string>ans;
    void fun(string s,int open,int close,int max,int n){
        if(s.size()==max){
            ans.push_back(s);
            return;
        }
        if(open<n){
            fun(s+"(",open+1,close,max,n);
        }
        if(close<open){
            fun(s+")",open,close+1,max,n);
        }
    }
    vector<string> generateParenthesis(int n) {
       int max=2*n;
        int open=0;
        int close=0; 
        fun("",open,close,max,n);
        return ans;
    }
};