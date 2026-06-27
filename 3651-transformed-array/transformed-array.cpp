class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& num) {
        int a = (int)num.size();
        vector<int>v(a);
        for(int i=0;i<a;i++){
            v[i]=num[((i+num[i]%a+a)%a)];
        }
        return v;
    }
};