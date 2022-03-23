class Solution {
public:
    int brokenCalc(int s, int t) {
      int ans=0;  
      if(t<s) return s-t;
      while(t>s){
        if(t%2==0){
          t/=2;
        }else{
          t+=1;
        }
        ans++;
      }
      if(t<s){
        ans+=s-t;
      }
      return ans;
    }
};