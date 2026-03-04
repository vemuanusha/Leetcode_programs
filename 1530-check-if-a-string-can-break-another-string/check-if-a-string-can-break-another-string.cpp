class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        bool f=true,s=true;
        for(int i=0,n=s1.length();i<n;i++){
            char ch1=s1[i],ch2=s2[i];
            if(ch1<ch2) f=false;
            if(ch1>ch2)s=false;
        }
        return f||s;
    }
};