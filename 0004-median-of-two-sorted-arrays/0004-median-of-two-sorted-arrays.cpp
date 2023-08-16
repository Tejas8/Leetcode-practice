class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size() + nums2.size();
        priority_queue<int>p;
        int i=0,j=0;
        while(i<nums1.size() || j<nums2.size()){
            if(p.size()<= n/2){
               if(i<nums1.size()){
                   p.push(nums1[i]);
                   i++;
               }else if(j<nums2.size()){
                   p.push(nums2[j]);
                   j++;
               }
                }else{
                if(i<nums1.size()){
                    if(p.top()>nums1[i]){
                        p.pop();
                        p.push(nums1[i]);
                        i++;
                    }else{
                        i=nums1.size();
                    }
                }else if(j<nums2.size()){
                    if(p.top()>nums2[j]){
                        p.pop();
                        p.push(nums2[j]);
                        j++;
                    }else{
                        j=nums2.size();
                    }
                }
            }
        }
        if(n%2==0){
            double a=p.top();
            p.pop();
            double b=p.top();
            return (a+b)/(double)2;
        }
            return (double)p.top();
        
    }
};