class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
        vector<int>v(m.size(),0);
        for(int i=0;i<m.size();i++){
           v[i]=accumulate(m[i].begin(),m[i].end(),0);
        }
        return v;
    }
};