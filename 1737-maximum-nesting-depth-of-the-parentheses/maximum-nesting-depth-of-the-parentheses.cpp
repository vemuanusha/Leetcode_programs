class Solution {
public:
    int maxDepth(string s) {
       int b=0;
       int m=0;
       for(auto i:s){
        if(i=='(') b++;
        else if(i==')') b--;

       m=max(m,b);
       } 
       return m;
    }
};