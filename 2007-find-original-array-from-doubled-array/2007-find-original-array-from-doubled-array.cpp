class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        int cnt0=0;
        vector<int>res;
        unordered_map<int,int>m;
        sort(c.begin(),c.end());
        for(auto i:c){
            if(i%2==0&&m[i/2]>0){
                res.push_back(i/2);
                m[i/2]--;
            }else if(m[2*i]>0){
                res.push_back(i);
                m[2*i]--;
            }else{
                m[i]++;
            }
        }
        if(res.size()*2==c.size()) return res;
        return vector<int>();
    }
};