class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        int n=arr.size();
        int i=0,j=n-1;
        while(j-i>=k){
            if(x-arr[i]>arr[j]-x) i++;
            else j--;
        }
        for(int l=i;l<=j;l++){
            ans.push_back(arr[l]);
        }
        return ans;
    }
};