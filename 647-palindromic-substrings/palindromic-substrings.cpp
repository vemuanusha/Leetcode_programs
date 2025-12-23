class Solution {
public:
int check(string s,int l,int r){
    int c=0;
    while(l>=0 && r<=s.length() && s[l]==s[r]){
        c++;
        l--;
        r++;
    }
    return c;
}
    int countSubstrings(string s) {
     int ans=0;
     for(int i=0;i<s.length();i++){
      ans += check(s,i,i);  
      ans += check(s,i,i+1);  
     } 
     return ans;  
    }
};