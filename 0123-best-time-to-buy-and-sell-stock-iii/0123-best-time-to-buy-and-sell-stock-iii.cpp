class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini=0;
        int maxi=0;
        int n=p.size();
        int mprofit=0;
        vector<int>ltor;
        vector<int>rtol(n,0);
        ltor.push_back(0);
        
        for(int i=1;i<n;i++){
            if(p[i] > p[mini]){
                maxi=i;
            }else if(p[i] < p[mini]){
                mini=i;
            }        
           if(mini<maxi) mprofit= max(mprofit,p[maxi]-p[mini]);
            ltor.push_back(mprofit);
        }
        mprofit=0;
        mini=n-1;
        maxi=n-1;
        for(int i=n-2;i>=0;i--){
            if(p[i]<p[maxi]){
                mini=i;
            }else if(p[i]>p[maxi]){
                maxi=i;
            }
           if(mini < maxi) mprofit=max(mprofit,p[maxi]-p[mini]);
            rtol[i]=mprofit;
        }
        for(int i=0;i<n;i++)cout<<ltor[i]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)cout<<rtol[i]<<" ";
        cout<<endl;
        mprofit=0;
        for(int i=0;i<n;i++){
            mprofit=max(mprofit,ltor[i]+rtol[i]);
        }
        return mprofit;
    }
};