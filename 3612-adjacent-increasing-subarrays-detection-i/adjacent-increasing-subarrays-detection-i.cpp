class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
      int n=nums.size();
      int c=1,p=0,res=0;
      for(int i=1;i<n;i++){
        if(nums[i]>nums[i-1]) c++;
        else{
            p=c;
            c=1;
        }
        res=max(res,min(p,c));
        res=max(res,c/2);
      }  
      return res>=k;
    }
};