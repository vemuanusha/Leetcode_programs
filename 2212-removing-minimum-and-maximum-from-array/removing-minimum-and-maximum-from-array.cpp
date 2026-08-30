class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mn=min_element(begin(nums),end(nums))-begin(nums);
        int mx=max_element(begin(nums),end(nums))-begin(nums);
        int l=min(mn,mx);
        int r=max(mn,mx);
        int f=r+1;
        int b=n-l;
        int fb=(l+1)+(n-r);
        return min({f,b,fb});
    }
};