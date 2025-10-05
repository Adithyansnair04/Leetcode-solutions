#include <string>
#include <unordered_map>
#include <climits>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> t_count;
        for (char c : t) t_count[c]++;  // Count characters in t

        unordered_map<char, int> window_count;
        int required = t_count.size();  // unique characters to match
        int formed = 0;  // how many unique chars meet required count

        int left = 0, right = 0;
        int min_len = INT_MAX, start = 0;

        while (right < s.size()) {
            char c = s[right];
            window_count[c]++;

            // Check if current char fulfills requirement
            if (t_count.count(c) && window_count[c] == t_count[c]) {
                formed++;
            }

            // Try to shrink the window from the left
            while (left <= right && formed == required) {
                char temp = s[left];

                // Update minimum window
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start = left;
                }

                window_count[temp]--;
                if (t_count.count(temp) && window_count[temp] < t_count[temp]) {
                    formed--;
                }

                left++;
            }

            right++;
        }

        return (min_len == INT_MAX) ? "" : s.substr(start, min_len);
    }
};

