class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        long long days=0;
        unordered_map<int,long long>m;
        for(int i=0;i<tasks.size();i++){
            if(i==0||(m[tasks[i]]==0&&tasks[i]!=tasks[0])){
                m[tasks[i]]=days;
            }else{
                if(days-m[tasks[i]]>space){
                    m[tasks[i]]=days;
                }else{
                    days+=(space+1)-(days-m[tasks[i]]);
                    m[tasks[i]]=days;
                }
            }
            days++;
        }
        return days; 
    }
};