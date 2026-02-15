class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      int ans=0;
       unordered_map<int,int>ct;
       ct[0]=1;
       int od=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]%2==1) od++;
        ans+=ct[od-k];
        ct[od]++;

       }
       return ans; 
    }
};