class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> numSet(nums.begin(), nums.end());

        int long_length = 0;
        for (int x : numSet){

            if (!numSet.contains(x - 1)){

                int count = 1;

                while (numSet.contains(x + 1)){
                    count++;
                    x++;
                }

                long_length = max(long_length, count);
            }
        }

        return long_length;
    }
};