class Solution {
public:
 int multiply(int a,int b,int mod){
     int res=0;
     while(b){
         if(b&1){
             res=(res+a)%mod;
         }
         a=(2*a)%mod;
         b=b>>1;
     }
     return res;
 }
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        int maxh=0;
        int maxv=0;
        int st=0;
        for(auto i:hc){
            maxh=max(maxh,i-st);
            st=i;
        }
        maxh=max(maxh,h-st);
        st=0;
        for(auto i:vc){
            maxv=max(maxv,i-st);
            st=i;
        }
        maxv=max(maxv,w-st);
        return multiply(maxh,maxv,1000000000+7);
    }
};