class Solution {
public:
    int integerBreak(int n) {
      if(n==2) return 1;
      if(n==3) return 2;
      int a=n/3;
      int b=n%3;
      if(b==1){
        a-=1;
        b=4;
      }else if(b==0){
        b=1;
      }
      return (int)(pow(3,a)*b);
    }
};