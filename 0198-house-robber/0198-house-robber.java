class Solution {
    public int rob(int[] nums) {
        int rob=0;
        int norob=0;
        for(int i=0;i<nums.length;i++){
            int newrob=norob + nums[i];
            int nonewrob= Math.max(rob,norob);
            rob=newrob;
            norob=nonewrob;
        }
        return Math.max(rob,norob);
    }
}