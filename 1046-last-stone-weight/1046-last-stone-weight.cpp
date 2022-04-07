class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>pq;
      for(auto i:stones){
        pq.push(i);
      }
      
      while(!pq.empty()){
        int y=0;
        int x=pq.top();
        pq.pop();
        if(!pq.empty()){
          y=pq.top();
          pq.pop();
        }
        if(y!=0){
          if(x>y){
            pq.push(x-y);
          }
        }else{
          return x;
        }
      }
      return 0;
    }
};