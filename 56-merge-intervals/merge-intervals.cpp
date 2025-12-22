class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>>v;
        int n=in.size();
        if(n==0) return v;
        sort(begin(in),end(in));
        int s=in[0][0];
        int e=in[0][1];
        for(int i=0;i<n;i++){
            if(in[i][0]<=e) e=max(e,in[i][1]);
        else{
            v.push_back({s,e});
            s=in[i][0];
            e=in[i][1];
        }
        }
        v.push_back({s,e});
        return v;
    }
};