class Solution {
public:
    bool isGood(vector<int>& nums) {
       int n=nums.size()-1;
       if(n==0) return 0;
       int fre[201]={0};
       for(int x: nums){
        if(fre[x]++==2){
            if(x!=n) return 0;
        }
       } 
       for(int x=1;x<=n-1;x++){
        if(fre[x]!=1) return 0;
       }
       return fre[n]==2;
    }
};