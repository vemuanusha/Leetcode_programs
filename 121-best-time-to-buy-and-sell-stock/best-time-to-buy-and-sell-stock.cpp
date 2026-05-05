class Solution {
public:
    int maxProfit(vector<int>& p) {
     int ans=0,mx=11111;
     for(auto &i : p){
        mx=min(mx,i);
        ans=max(ans,i-mx);
     }
     return ans;
    }
};