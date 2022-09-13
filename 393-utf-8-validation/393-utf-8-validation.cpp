class Solution {
public:
    bool validUtf8(vector<int>& data) {
        int cnt=0;
        int n=data.size();
        while(cnt<n){
        int nbyte=0;
        int temp=data[cnt];
        for(int i=7;i>=0;i--){
            int k=1;
            k<<=i;
            if(temp&k)nbyte++;
            else break;
        }
        cout<<nbyte<<endl;
        if(nbyte==0)nbyte=1;
        else if(nbyte==1||nbyte-1>(int)data.size()-1-cnt||nbyte>4) return false; 
            cnt+=1;
            int p=cnt-1;
        for(int i=cnt;i<=p+nbyte-1;i++){
            temp=data[i];
            int byte=0;
            for(int j=7;j>=0;j--){
            int k=1;
            k<<=j;
            if(temp&k)byte++;
            else break;
                cnt++;
        }
            cout<<byte<<endl;
            if(byte!=1) return false;
        }
        }
        return true;
    }
};