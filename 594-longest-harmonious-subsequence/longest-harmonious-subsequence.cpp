class Solution {
public:
    int findLHS(vector<int>& nums) {
       sort(begin(nums),end(nums));
       int j=0,mx=0;
       for(int i=0;i<nums.size();i++){
        while(nums[i]-nums[j]>1){
            j++;
        }
        if(nums[i]-nums[j]==1){
            mx=max(mx,i-j+1);
        }
       } 
       return mx;
    }
};