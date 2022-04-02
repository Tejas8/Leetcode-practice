class Solution {
  void dfs(int[][] mat,int[] arr,int i){
    for(int j=0;j<mat.length;j++){
      if(arr[j]==1)continue;
      if(mat[i][j]==1){
        arr[j]=1;
        dfs(mat,arr,j);
      }
    }
  }
    public int findCircleNum(int[][] mat) {
        int[] arr=new int[mat.length];
      int cnt=0;
      for(int i=0;i<mat.length;i++){
        if(arr[i]==0){
          dfs(mat,arr,i);
          cnt++;
        }
      }
     return cnt; 
    }
}