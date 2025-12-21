class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
       sort(begin(nums),end(nums));
       int cls=nums[0]+nums[1]+nums[2];
       for(int i=0;i<nums.size()-2;i++){
        int l=i+1,r=nums.size()-1;
        while(l<r){
            int sum=nums[i]+nums[l]+nums[r];
            if(abs(sum-tar)<abs(cls-tar)) cls=sum;
            if(sum<tar) l++;
            else if(sum>tar) r--;
            else return sum;
        }
       }
       return cls;
    }
};