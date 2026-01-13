class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& h) {
       unordered_map<int,string>mp;
       for(int i=0;i<names.size();i++){
        mp[h[i]]=names[i];
       } 
       sort(begin(h),end(h),greater<int>());
       for(int i=0;i<names.size();i++){
        names[i]=mp[h[i]];
       }
       return names;
    }
};