class Solution {
public:
    int balancedStringSplit(string s) {
        int b=0,ans=0;
        for(char c : s){
            if(c=='R') b++;
            else b--;
            if(b==0) ans++;
        }
        return ans;
    }
};