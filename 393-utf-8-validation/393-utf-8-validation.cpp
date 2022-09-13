class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int cnt=0,nbyte,byte,temp,k;
        int n=data.size();
        while(cnt<n){
         nbyte=0;
         temp=data[cnt];
        for(int i=7;i>=0;i--){
         k=1;
            k<<=i;
            if(temp&k)nbyte++;
            else break;
        }
        if(nbyte==0)nbyte=1;
        else if(nbyte==1||nbyte+cnt>(int)data.size()||nbyte>4) return false; 
            cnt+=1;
            int p=cnt-1;
        for(int i=cnt;i<=p+nbyte-1;i++){
            temp=data[i];
             byte=0;
            for(int j=7;j>=0;j--){
             k=1;
            k<<=j;
            if(temp&k)byte++;
            else break;
                cnt++;
        }
            if(byte!=1) return false;
        }
        }
        return true;
    }
};