class Solution {
public:
    int minimumRefill(vector<int>& p, int cA, int cB) {
       int a=cA,b=cB; 
        int n=p.size(),c=0;
        int i=0,j=n-1;
        while(i<j){
            if(a<p[i]){
                c++;
                a=cA;
            }
            a-=p[i];
            i++;
            if(b<p[j]){
                c++;
                b=cB;
            }
            b-=p[j];
            j--;
        }
        if(i==j){
            if(max(a,b)<p[i]) c++;
        }
        return c;
    }
};