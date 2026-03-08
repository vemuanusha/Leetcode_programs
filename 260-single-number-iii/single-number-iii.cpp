class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      unordered_map<int,int>v;
      for(auto i:nums) v[i]++;
      vector<int>ans;
      for(auto j:v){
        if(j.second==1) {
            ans.push_back(j.first);
            if(ans.size()==2) return ans;
        }
            
      }
      return ans;

    }
};