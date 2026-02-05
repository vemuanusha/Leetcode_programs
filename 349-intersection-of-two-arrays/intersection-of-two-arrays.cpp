class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>a;
        for(auto i:nums1){
            a.insert(i);
        }
        unordered_set<int>b;
        for(auto j:nums2){
            if(a.count(j)) b.insert(j);
        }
        vector<int>res;
        for(auto i:b){
            res.push_back(i);
        }
        return res;
    }
};