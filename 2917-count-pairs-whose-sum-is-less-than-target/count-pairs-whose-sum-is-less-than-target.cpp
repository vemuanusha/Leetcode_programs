class Solution {
public:
    int countPairs(vector<int>& nums, int t) {
      sort(nums.begin(),nums.end());
       int n=nums.size();
       int l=0,r=n-1,c=0;
       while(l<=r){
        if(nums[l]+nums[r]>=t){
            r--;
        }
        else{
            c+=(r-l);
            l++;
        }
       }
       return c;
    }
};