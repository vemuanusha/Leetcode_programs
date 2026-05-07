class Solution {
public:
    int countPermutations(vector<int>& com) {
      const int mod=1e9+7;
      long long fact=1;
      for(int i=1;i<com.size();i++){
         if(com[i]<=com[0]){
            return 0;
         }
         fact*=i;
         fact%=mod;
      }  
      return fact;
    }
};