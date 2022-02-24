class Solution {
public:
    int minimumDeviation(vector<int>& n) {
     int res=INT_MAX;
      int mini=INT_MAX;
      priority_queue<int>q;  
      for(auto i:n){
          i=i%2?i*2:i;
          q.push(i);
        mini=min(mini,i);
        }
      while(q.top()%2==0){
        res=min(res,q.top()-mini);
        mini=min(mini,q.top()/2);
        int t=q.top();
        q.pop();
        q.push(t/2);
      }
      return min(res,q.top()-mini);
    }
};