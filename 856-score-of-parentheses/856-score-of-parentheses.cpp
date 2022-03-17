class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
      int i=0,n=s.size();
      while(i<n){
        if(s[i]=='('){
          st.push(-1);
        }else{
          if(st.top()<0){
            st.pop();
            st.push(1);
          }else{
            int sum=0;
            while(!st.empty()&&st.top()!=-1){
              sum+=st.top();
              st.pop();
            }
            st.pop();
            st.push(2*sum);
          }
        }
        i++;
      }
      int sum=0;
      while(!st.empty()){
        sum+=st.top();
        st.pop();
      }
      return sum;
    }
};