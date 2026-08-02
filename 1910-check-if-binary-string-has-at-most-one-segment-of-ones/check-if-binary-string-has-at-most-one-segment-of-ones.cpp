class Solution {
public:
    bool checkOnesSegment(string s) {
        bool a=false;
        for(char i:s){
            if(i=='0') a=true;
            else if(a) return false;
        }
        return true;
    }
};