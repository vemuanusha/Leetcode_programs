class Solution {
public:
    int distributeCandies(vector<int>& c) {
      unordered_map<int,int>m;
      for(int i=0;i<c.size();i++) m[c[i]]++;
      int n=c.size()/2;
      return (n<m.size()) ? n: m.size();  
    }
};