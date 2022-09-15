class Solution {
public:
    vector<int> findOriginalArray(vector<int>& c) {
        if(c.size()%2)return {};
        vector<int>res;
        unordered_map<int,int>m;
        sort(c.begin(),c.end());
        for(auto i:c){
            if(i%2==0&&m[i/2]>0){
                res.push_back(i/2);
                m[i/2]--;
            }else{
                m[i]++;
            }
        }
        if(res.size()*2==c.size()) return res;
        return vector<int>();
    }
};