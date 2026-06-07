class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v={{}};
        for(int j:nums){
            int n=v.size();
            for(int i=0;i<n;i++){
                vector<int>m=v[i];
                m.push_back(j);
                v.push_back(m);
            }
        }
        return v;
    }
};