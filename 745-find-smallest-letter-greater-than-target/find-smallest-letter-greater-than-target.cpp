class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
       return l[(upper_bound(l.begin(),l.end(),t)-l.begin())%l.size()];
    }
};