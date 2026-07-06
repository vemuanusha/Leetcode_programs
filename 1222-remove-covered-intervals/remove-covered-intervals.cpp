class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& i) {
        sort(begin(i),end(i));
        int n=i.size(),ans=n;
        int l=i[0][0],r=i[0][1];
        if(n==1) return 1;
        for(int a=1;a<n;a++){
            if(r>=i[a][1] && l<=i[a][0]) ans--;
            else if (l==i[a][0]){
                ans--;
                r=i[a][1];
            
            }
            else{
                l=i[a][0];
                r=i[a][1];
            }
        }
        return ans;
    }
};