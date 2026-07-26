class Solution {
public:
    int maximumProduct(vector<int>& n) {
        sort(begin(n),end(n));
        int l=n.size();
        return max(n[l-1]*n[l-2]*n[l-3],n[0]*n[1]*n[l-1]);
    }
};