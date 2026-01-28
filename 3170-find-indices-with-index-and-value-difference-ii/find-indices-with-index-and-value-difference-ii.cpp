class Solution {
public:
    vector<int> findIndices(vector<int>& n, int id, int v) {
       int mn=0,mx=0;
       int a=n.size();
       for(int i=id;i<a;i++){
         int p=i-id;
         if(n[p]<n[mn]) mn=p;
         if(n[p]>n[mx]) mx=p;
         if(n[i]-n[mn]>=v) return {mn,i};
         if(n[mx]-n[i]>=v) return {mx,i};
       }
       return {-1,-1};
    }
};