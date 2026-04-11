class Solution {
public:
    int minLength(vector<int>& nums, int k) {
      unordered_map<int,int>mp;
      int l=0;
      int s=0,r=0,res=INT_MAX;
      while(r<nums.size()){
        if(!mp[nums[r]]) s+=nums[r];
        mp[nums[r]]++;
        while(s>=k){
            res=min(res,r-l+1);
            mp[nums[l]]--;
            if(mp[nums[l]]==0) s-=nums[l];
            l++;
        }
        r++;
      }     
      return res==INT_MAX ? -1 : res; 
    }
};