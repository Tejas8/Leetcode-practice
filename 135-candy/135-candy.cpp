class Solution {
public:
    int candy(vector<int>& rat) {
        vector<int>val(rat.size(),1);
        int ans=0;
        for(int i=1;i<rat.size();i++){
            if(rat[i]>rat[i-1])val[i]=val[i-1]+1;
        }
        for(int i=rat.size()-1;i>0;i--){
            if(rat[i-1]>rat[i])val[i-1]=max(val[i]+1,val[i-1]);
        }
        for(auto i:val)ans+=i;
        return ans;
    }
};