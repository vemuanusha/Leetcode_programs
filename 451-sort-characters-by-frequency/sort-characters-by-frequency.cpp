class Solution {
public:
    string frequencySort(string s) {
     unordered_map<char,int>freq;
     for(char c:s) freq[c]++;
     multimap<int,char,greater<int>>mp;
     for(const auto &p:freq){
        mp.insert({p.second,p.first});
     }
     string ans;
     ans.reserve(s.size());
     for(const auto &p :mp){
        ans+=string(p.first,p.second);
     }
     return ans;
    }
};