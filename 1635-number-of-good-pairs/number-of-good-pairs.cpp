class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int,int>m;
       int ans=0;
       for(auto x:nums){
        ans += m[x]; 
         m[x]++;
       } 
       return ans;
    }
};