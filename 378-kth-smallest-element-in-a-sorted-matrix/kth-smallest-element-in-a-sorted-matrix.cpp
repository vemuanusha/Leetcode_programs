class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
     int r=m.size();  
     int c=m[0].size();
     int e=0;
     vector<int>v;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            v.push_back(m[i][j]);
        }
     } 
     sort(begin(v),end(v));
     return v[k-1];
    }
};