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
    int countHousePlacements(int n) {
        int mod=1000000007;
        int one =1;
        int two=1;
        int ans=0;
        while(n--){
            ans=(one+two)%mod;
            one=two;
            two=ans;
        }
        return multiply(ans,ans,1000000007);
    }
};