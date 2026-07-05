class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& que) {
        int n=arr.size();
        vector<int>p(n);
        p[0]=arr[0];

        for(int i=1;i<n;i++){
            p[i]=p[i-1]^arr[i];
        }
        vector<int>res(que.size());
        for(int k=0;k<que.size();k++){
            int i=que[k][0];
            int j=que[k][1];
            if(i==0) res[k]=p[j];
            else res[k]=p[j]^p[i-1];
        }
        return res;
    }
};