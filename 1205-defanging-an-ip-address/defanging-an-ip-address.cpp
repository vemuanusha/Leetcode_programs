class Solution {
public:
    string defangIPaddr(string add) {
     string res;
     for(auto c:add) {
        if(c=='.') res+="[.]";
        else res+=c;
     }
     return res;
    }
};