class Solution {
public:
    int titleToNumber(string col) {
        int r=0;
        for(char c:col){
            int d=c-'A'+1;
            r=r*26+d;
        }
        return r;
    }
};