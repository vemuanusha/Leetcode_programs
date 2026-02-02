class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>mp;
     for(string a:strs){
        string t=a;
        sort(t.begin(),t.end());
        mp[t].push_back(a);
     }   
     vector<vector<string>>ang;
     for(auto p:mp){
        ang.push_back(p.second);
     }
     return ang;
    }
};