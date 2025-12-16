class Solution {
public:
    int wateringPlants(vector<int>& p, int c) {
     int r=0,n=c;
     for(int i=0;i<p.size();i++){
        if(n<p[i]){
            n=c-p[i];
            r+=2*i+1;
        }
        else{
          n-=p[i];
          r++;  
        }
     } 
     return r;  
    }
};