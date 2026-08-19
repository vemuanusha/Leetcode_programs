class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int l=0,r=0;
        for(int i:nums1){
            for(int j:nums2){
                if(i==j){
                    l++;
                    break;
                }
            }
        }
        for(int i:nums2){
            for(int j:nums1){
                if(i==j){
                    r++;
                    break;
                }
            }
        }
        return {l,r};
    }
};