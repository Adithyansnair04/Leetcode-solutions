class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;  // base case: sum = 0 occurs once
        int currentSum = 0;
        int count = 0;

        for (int num : nums) {
            currentSum += num;

            // check if there is a prefix sum that makes a subarray sum = k
            if (prefixSumCount.count(currentSum - k)) {
                count += prefixSumCount[currentSum - k];
            }

            // store the current prefix sum in the map
            prefixSumCount[currentSum]++;
        }

        return count;
    }
};


