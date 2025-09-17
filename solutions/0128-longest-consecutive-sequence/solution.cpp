class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

      
        std::unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;

        
        for (int num : s) {
            
            if (!s.count(num - 1)) {
                int currentNum = num;
                int streak = 1;

                while (s.count(currentNum + 1)) {
                    currentNum++;
                    streak++;
                }

                longest = std::max(longest, streak);
            }
        }
        return longest;
    }
};
