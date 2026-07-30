class Solution {
public:
    int minimumPushes(string w) {
       auto a=w.size() >> 3, r=w.size()&7;
       return ((a<<2)+r)*(a+1);
    }
};