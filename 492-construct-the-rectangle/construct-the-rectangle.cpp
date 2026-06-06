class Solution {
public:
    vector<int> constructRectangle(int area) {
       int s=sqrt(area);
       for(int i=s;i>0;i--){
        if(area%i==0) return {area/i,i};
       } 
       return {};
    }
};