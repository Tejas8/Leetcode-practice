class Solution {
public:
    int maxArea(vector<int>& h) {
       int left=0;
      int right=h.size()-1;
      int maxi=(right-left)*min(h[left],h[right]);
      while(left<right){
        if(h[left]<h[right]){
          left++;
        }else{
          right--;
        }
        maxi=max(maxi,(right-left)*min(h[left],h[right]));
      }
      return maxi;
    }
};