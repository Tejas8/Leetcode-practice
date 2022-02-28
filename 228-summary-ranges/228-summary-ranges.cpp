class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      string  str="";
      vector<string>res;
      
      if(nums.size()==0){
        //res.push_back(str);  
        return res;
        }
      int pre=nums[0];
      int st=nums[0];
      for(int i=1;i<nums.size();i++){
        if(pre+1==nums[i]){
          pre=nums[i];
          continue;
        }else{
          if(nums[i-1]!=st){
            string temp=to_string(st)+'-'+'>'+to_string(nums[i-1]);
            res.push_back(temp);
          }else{
            string temp=to_string(st);
            res.push_back(temp);
          }
        }
        //res.push_back(temp);
        pre=nums[i];
        st=nums[i];
      }
      if(nums[nums.size()-1]==st){
        string temp=to_string(st);
        res.push_back(temp);
      }else{
        string temp=to_string(st)+'-'+'>'+to_string(nums[nums.size()-1]);
        res.push_back(temp);
      }
      return res;
    }
};