class Solution {
public:
    int minElement(vector<int>& nums) {
       int n = INT_MAX;
       for(int i:nums){
        int c=0;
        while(i>0){
            c+=i%10;
            i/=10;
        }
        n=min(n,c);
       }
       return n;
    }
};