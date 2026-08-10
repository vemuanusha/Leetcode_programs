class Solution {
public:
    int minimumSum(int num) {
       vector<int>a;
       while(num>0){
        a.push_back(num%10);
        num/=10;
       } 
       sort(begin(a),end(a));
       return (a[0]*10 +a[2]) + (a[1]*10 + a[3]);
    }
};