class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& im) {
       vector<vector<int>>m;
       for(int i=0;i<im.size();i++){
        vector<int>v;
        reverse(im[i].begin(),im[i].end());
        for(int j=0;j<im[i].size();j++){
            if(im[i][j]==0) v.push_back(1);
            else v.push_back(0);
        }
        m.push_back(v);
       } 
       
       return m;
    }
};