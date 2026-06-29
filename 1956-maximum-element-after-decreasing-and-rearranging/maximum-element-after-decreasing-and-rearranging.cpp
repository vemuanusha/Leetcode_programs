class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& a) {
        int n=a.size();
        vector<int>freq(n+1,0);
        for(auto& i:a) freq[min(i,n)]++;
        int ans=0;
        for(int i=1;i<=n;i++) ans=min(i,ans+freq[i]);
        return ans;
    }
};