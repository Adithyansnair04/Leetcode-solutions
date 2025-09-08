class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue; // skip duplicate i

            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j-1]) continue; // skip duplicate j

                long long newTarget = target - (long long)nums[i] - (long long)nums[j];
                int left = j + 1, right = n - 1;

                while (left < right) {
                    long long sum = (long long)nums[left] + (long long)nums[right];
                    if (sum == newTarget) {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});

                        // skip duplicates
                        while (left < right && nums[left] == nums[left+1]) left++;
                        while (left < right && nums[right] == nums[right-1]) right--;

                        left++;
                        right--;
                    } 
                    else if (sum < newTarget) {
                        left++;
                    } else {
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
