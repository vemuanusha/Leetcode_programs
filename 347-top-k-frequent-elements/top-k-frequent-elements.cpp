class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int>m;
       for(auto i:nums) m[i]++;
       vector<pair<int,int>>v;
       for(auto j:m) v.push_back({j.second,j.first});
       sort(v.begin(),v.end(),greater<pair<int,int>>());
       vector<int>ans;
       for(int i=0;i<k;i++){
        ans.push_back(v[i].second);
       }
       return ans;

    }
};