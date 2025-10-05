#include <vector>
#include <cmath> // For std::abs, though direct comparison is used

class Solution {
public:
    std::vector<int> findClosestElements(std::vector<int>& arr, int k, int x) {
        // The search space for the starting index of the window is [0, n-k].
        int low = 0;
        int high = arr.size() - k;

        // Perform binary search to find the optimal starting index.
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            // Compare the start of the window (arr[mid]) with the
            // first element to the right of the window (arr[mid + k]).
            // If arr[mid] is farther from x than arr[mid + k], then the
            // optimal window must start after mid.
            if (x - arr[mid] > arr[mid + k] - x) {
                low = mid + 1;
            } else {
                // Otherwise, arr[mid] is closer or equidistant, meaning the
                // optimal window could start at mid or to its left.
                high = mid;
            }
        }

        // 'low' is now the starting index of the result subarray.
        // We create a new vector from the subarray arr[low]...arr[low + k - 1].
        return std::vector<int>(arr.begin() + low, arr.begin() + low + k);
    }
};
