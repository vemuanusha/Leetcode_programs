class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        for(int i=n-1;i>=1;i--){
            if(nums[i]<=nums[i-1]) return i;
        }
        return 0;

    }
};