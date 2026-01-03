class Solution {
public:
    void sol(int i,vector<int>&nums,vector<vector<int>>&v){
        if(i==nums.size()){
            v.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            sol(i+1,nums,v);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
      vector<vector<int>>v;
      sol(0,nums,v);
      return v;  
    }
};