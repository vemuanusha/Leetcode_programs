class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
      sort(begin(arr),end(arr));
      int n=arr.size();
      int m=arr[n-1]-arr[n-2];
      for(int i=1;i<n;i++){
        m=min(m,arr[i]-arr[i-1]);
      }  
      vector<vector<int>>v;
      for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1] == m){
            v.push_back({arr[i-1],arr[i]});
        }
      }
      return v;
    }
};