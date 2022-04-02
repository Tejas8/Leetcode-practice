class Solution {
    public boolean validPalindrome(String s) {
       int i=0;
      int j=s.length()-1;
      while(i<j){
        if(s.charAt(i)==s.charAt(j))
        {
          i++;
          j--;
        }else{
          int i1=i+1,j1=j,i2=i,j2=j-1;
          while(i1<j1&&s.charAt(i1)==s.charAt(j1)){
            i1++;
            j1--;
          }
          while(i2<j2&&s.charAt(i2)==s.charAt(j2)){
            i2++;
            j2--;
          }
          if(i1>=j1||i2>=j2)return true;
          else return false;
        }
      }
      return true;
    }
}