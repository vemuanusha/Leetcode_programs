class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
      vector<int>ans(k,0);
      sort(logs.begin(),logs.end());
      int t=1;
      for(int i=1;i<logs.size();i++){
        if(logs[i][0]==logs[i-1][0]){
            if(logs[i][1]!=logs[i-1][1]) t++;
        }
        else{
        ans[t-1]++;
        t=1;
      }
      }  
      ans[t-1]++;
      return ans;
    }
};