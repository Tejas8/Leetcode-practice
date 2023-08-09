class Solution {
public:
    char nextGreatestLetter(vector<char>& le, char t) {
        int l=le.size()-1;
        int s=0;
        while(s<l){
            int mid=s+(l-s)/2;
            if(le[mid]==t ||le[mid]<t){
                s=mid+1;
            }else{
                l=mid;
            }
        }
        return le[s]>t?le[s]:le[0];
    }
};