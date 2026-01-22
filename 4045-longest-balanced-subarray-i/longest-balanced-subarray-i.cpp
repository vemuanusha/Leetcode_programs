class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans=0;
     for(int i=0;i<nums.size();i++){
        unordered_map<int,int>od,ev;
        for(int j=i;j<nums.size();j++){
            if(nums[j]%2==0) ev[nums[j]];
               else od[nums[j]]++;

            if(od.size()==ev.size()) ans=max(ans,j-i+1);
        }
     }  
     return ans; 
    }
};