class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        vector<int>arr1(n,-1);
        vector<int>arr2(n,-1);
        int cmax=h[0];
        int imax=0;
        for(int i=1;i<n;i++){
            if(h[i]<cmax){
                arr1[i]=imax;
            }else{
                arr1[i]=-1;
                cmax=h[i];
                imax=i;
            }
        }
        cmax=h[n-1];
        imax=n-1;
        for(int i=n-2;i>=0;i--){
            if(h[i]<cmax){
                arr2[i]=imax;
            }else{
                arr2[i]=-1;
                cmax=h[i];
                imax=i;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(arr1[i]==-1 || arr2[i]==-1){
                continue;
            }else{
                int temp=min(h[arr1[i]],h[arr2[i]])-h[i];
                ans+=temp;
            }
        }
        return ans;
    }
};