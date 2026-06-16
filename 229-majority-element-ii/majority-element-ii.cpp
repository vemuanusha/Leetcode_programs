class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c=nums.size()/3;
        unordered_map<int,int>mp;
        vector<int>res;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto j:mp){
            if(j.second > c){
                res.push_back(j.first);
            }
        }
        return res;
    }
};