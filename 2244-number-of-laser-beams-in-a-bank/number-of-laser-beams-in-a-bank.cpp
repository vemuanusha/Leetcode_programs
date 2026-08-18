class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        long long ans=0;
        long long pre=0;
        for(auto & i:bank){
            long long c=0;
            for(char ch:i) if(ch=='1') c++;

            if(c>0){
                ans+=pre*c;
                pre=c;
            }
        }
        return (int)ans;
    }
};