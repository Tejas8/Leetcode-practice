class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int st=0;
        int ts=0;
        int s=0;
        for(int i=0;i<gas.size();i++){
            ts+=gas[i]-cost[i];
            s+=gas[i]-cost[i];
            if(s<0){
                s=0;
                st=i+1;
            }
        }
        return ts<0?-1:st;
    }
};