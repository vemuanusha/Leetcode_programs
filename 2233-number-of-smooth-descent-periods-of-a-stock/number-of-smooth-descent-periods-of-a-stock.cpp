class Solution {
public:
    long long getDescentPeriods(vector<int>& p) {
        long long ans=1,c=1;
        for(int i=0;i<p.size()-1;i++){
            if(p[i]==p[i+1]+1) c++;
            else c=1;
            ans+=c;
        }
        return ans;
    }
};