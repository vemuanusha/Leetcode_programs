class Solution {
public:
    int strStr(string h, string n) {
       for(int i=0;i+n.size()<=h.size();++i){
            if(h.substr(i,n.size())==n){
                return i;
            }
        }
        return -1;
    }
};