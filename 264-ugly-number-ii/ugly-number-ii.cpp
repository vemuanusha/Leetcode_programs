class Solution {
public:
    int nthUglyNumber(int n) {
       set<long>s;
       long a=1;
       s.insert(a);
       for(int i=0;i<n;i++){
        a=*s.begin();
        s.erase(a);
        s.insert(a*2);
        s.insert(a*3);
        s.insert(a*5);
       }
       return a;
    }
};