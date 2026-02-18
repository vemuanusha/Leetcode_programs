class Solution {
public:
    void setZeroes(vector<vector<int>>& mx) {
      vector<vector<int>>v=mx; 
      int n=mx.size();
      int m=mx[0].size();
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mx[i][j]==0){
                for(int k=0;k<m;k++) v[i][k]=0;
            }
        }
      }
       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mx[i][j]==0){
                for(int k=0;k<n;k++) v[k][j]=0;
            }
        }
      }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx[i][j]=v[i][j];
        }
      }
    }
};