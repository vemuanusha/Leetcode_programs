class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v;

        string s="123456789";
        string l=to_string(low);
        string h=to_string(high);

        for(int i=l.size(); i<=h.size(); i++) {
            for(int j=0; j<=9-i; j++) {
                string n=s.substr(j,i);
                int nm=stoi(n);
                if(nm>=low && nm<=high) v.push_back(nm);
            }
        }

        return v;
    }
};