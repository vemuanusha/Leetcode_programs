class Solution {
public:
    int countPrimeSetBits(int l, int r) {
        int pr[]={2, 3, 5, 7, 11, 13, 17, 19};
        bitset<21> isPrime=0;
        for(int p: pr) isPrime[p]=1;
        int s=0;
        for(unsigned i=l; i<=r; i++){
            int b=popcount(i);
            if (isPrime[b]) s++;
        }
        return s;
    }
};