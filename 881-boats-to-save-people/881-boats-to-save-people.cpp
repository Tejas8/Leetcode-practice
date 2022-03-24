class Solution {
public:
    int numRescueBoats(vector<int>& p, int lim) {
        int i=0;
      int j=p.size()-1,res=0;
      sort(p.begin(),p.end());
      while(i<j){
        if(p[i]+p[j]<=lim){
          i++;
          j--;
        }else{
          j--;
        }
        res++;
      }
      if(i==j) res++;
      return res;
    }
};