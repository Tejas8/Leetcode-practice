class Solution {
public:
    bool binary(vector<int>& nums, int target,int s,int end)
    {
        if(s>end)return false;
        while(s<=end)
        {
            int mid=s+(end-s)/2;
            if(target==nums[mid])
            {
                return true;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else 
            {
                s=mid+1;
            }
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==1)
        {
            if(nums[0]==target)return true;
            return false;
        }
        int temp=-1;
            for(int i=1;i<n;i++)
            {
                if(nums[i]<nums[i-1])
                {
                    temp=i;
                    break;
                }
            }
        if(temp==-1)return binary(nums,target,0,n-1);
        if(target>=nums[0]&&target<=nums[temp-1])
        {
            cout<<0<<" "<<temp-1;
            return binary(nums,target,0,temp-1);
        }
        else if(target>=nums[temp]&&target<=nums[n-1])
        {
            return binary(nums,target,temp,n-1);
        }
        return false;
    }
};