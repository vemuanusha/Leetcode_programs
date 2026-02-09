class Solution {
public:
    vector<int> grayCode(int n) {
       int s=1<<n;
       vector<int>ans(s);
       for(int i=0;i<s;i++) ans[i]=i^(i>>1);

       return ans; 
    }
};