class Solution {
public:
    int maxProduct(int n) {
        vector<int>v;
       while(n>0){
        int d=n%10;
        v.push_back(d);
        n/=10;
       } 
       sort(begin(v),end(v));
       int b=v.size();
       return v[b-1]*v[b-2];
    }
};