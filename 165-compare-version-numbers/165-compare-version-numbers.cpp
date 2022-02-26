class Solution {
public:
    int compareVersion(string ver1, string ver2) {
       int n1=ver1.size();
      int n2=ver2.size();
      int i=0;
      int j=0;
      while(i<n1||j<n2){
        int temp1=0,temp2=0;
        while(i<n1&&ver1[i]!='.'){
          temp1=temp1*10+ver1[i]-'0';
          i++;
        }
        while(j<n2&&ver2[j]!='.'){
          temp2=temp2*10+ver2[j]-'0';
          j++;
        }
        if(temp1<temp2){
          return -1;
        }else if(temp1>temp2){
          return 1;
        }
        i++;
        j++;
      }
      return 0;
    }
};