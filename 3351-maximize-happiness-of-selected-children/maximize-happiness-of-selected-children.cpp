class Solution {
public:
    long long maximumHappinessSum(vector<int>& h, int k) {
       sort(begin(h),end(h),greater<int>());
       long long t=0;
       for(int i=0;i<k;i++){
        int val=h[i]-i;
        if(val>0) t+=val;
       } 
       return t;
    }
};