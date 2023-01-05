class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
      sort(p.begin(),p.end());
        int ans=1;
        int temp=p[0][1];
        for(auto i:p){
            if(temp<i[0]){
                ans++;
                temp=i[1];
            }else{
                temp=min(i[1],temp);
            }
        }
        return ans;
    }
};