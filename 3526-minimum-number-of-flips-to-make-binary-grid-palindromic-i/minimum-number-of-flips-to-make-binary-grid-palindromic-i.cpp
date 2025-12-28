class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int r=0;
        int c=0;
        for (int i=0;i<m;i++) {
            int a=0,b=n-1;
            while (a<b) {
                if (grid[i][a] != grid[i][b])
                   r++;
                   a++;
                   b--;
            }
        }
        for (int j=0;j<n;j++) {
            int x=0, y=m-1;
            while (x<y) {
                if (grid[x][j] != grid[y][j])
                 c++;
                 x++;
                 y--;
            }
        }
        return min(r,c);   
    }
};