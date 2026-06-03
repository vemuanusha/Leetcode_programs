class Solution {
public:
    int countBattleships(vector<vector<char>>& b) {
     int n=0;
     for(int i=0;i<b.size();i++){
        for(int j=0;j<b[0].size();j++){
            if('X'==b[i][j] && (!i || '.'==b[i-1][j]) && (!j || '.'==b[i][j-1]))
            n++;
        }
     }   
     return n;
    }
};