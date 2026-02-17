class Solution {
public:
    int divide(int d, int dv) {
       if(d==INT_MIN && dv==-1)
        return INT_MAX;
       return d/dv; 
    }
};