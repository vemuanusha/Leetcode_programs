class Solution {
public:
    int maxProfit(vector<int>& pr) {
     int j=pr[0];
     int c=0;
     for(int i=1;i<pr.size();i++){
        if(pr[i-1]<pr[i]){
            c+=(pr[i]-pr[i-1]);
        }
     }
     return c;
    }
};