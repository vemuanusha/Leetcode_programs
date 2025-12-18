class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int pow) {
      sort(begin(t),end(t));
        int s=0,mx=0;
        int l=0,r=t.size()-1;
        while(l<=r){
            if(pow>=t[l]){
                pow-=t[l];
                s++;
                l++;
                mx=max(mx,s);
            }
            else if(s>0){
                pow+=t[r];
                s--;
                r--;
            }
            else break;
        }
        return mx;
    }
};