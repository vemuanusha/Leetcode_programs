class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int m) {
        nums[0]^=(1<<m)-1;
        partial_sum(begin(nums),end(nums),begin(nums),bit_xor<>());
        reverse(begin(nums),end(nums));
        return nums;
    }
};