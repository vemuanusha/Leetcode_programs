class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& g, int k) {
        int m=g.size();
        int n=g[0].size();
        int t=m*n;
        k%=t;
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int idx=i*n+j;
                int nxt=(idx+k)%t;
                ans[nxt/n][nxt%n]=g[i][j];
            }
        }
        return ans;
    }
};