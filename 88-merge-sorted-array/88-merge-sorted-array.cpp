class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int one=m-1;
        int two=n-1;
        if(m==0){
            nums1=nums2;
            return;
        }
        if(n==0){
            return;
        }
        int ind=m+n-1;
        for(int i=ind;i>=0;i--){
            if(one<0||two<0) break;
            if(nums1[one]>=nums2[two]){
                nums1[i]=nums1[one];
                one--;
            }else{
                nums1[i]=nums2[two];
                two--;
            }       
        }
        if(one<0){
            for(int i=0;i<=two;i++){
                nums1[i]=nums2[i];
            }
        }
    }
};