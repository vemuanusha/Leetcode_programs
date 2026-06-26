class Solution {
public:
    bool isTrionic(vector<int>& n) {
       int r=n.size(),i=1;
       while(i<r && n[i-1]<n[i]) i++;
       int p=i-1;
       while(i<r && n[i-1]>n[i]) i++;
       int q=i-1;
       while(i<r && n[i-1]<n[i]) i++;
       int flag = i-1;
       return (p!=0) && (q!=p) && (flag == r-1 && flag !=q); 
    }
};