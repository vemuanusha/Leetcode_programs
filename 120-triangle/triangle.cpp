// class Solution {
// public:
//     int solve(vector<vector<int>>& triangle,int i,int j,vector<vector<int>>&dp){
//         if(i==triangle.size()-1)return triangle[i][j];
//         if(dp[i][j]!=-1)return dp[i][j];
//         return dp[i][j]= triangle[i][j]+ min(solve(triangle,i+1,j,dp),solve(triangle,i+1,j+1,dp));
//     }
//     int minimumTotal(vector<vector<int>>& triangle) {
//         if(triangle.size()==1)return triangle[0][0];
//         vector<vector<int>> dp;
//         for (int i = 0; i < triangle.size(); i++) {
//             dp.push_back(vector<int>(triangle[i].size(), -1));
//         }
//         solve(triangle, 0, 0, dp);
//         return dp[0][0];
//     }
// };


class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(triangle.back());

        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j + 1]);
            }
        }
        return dp[0];
    }
};