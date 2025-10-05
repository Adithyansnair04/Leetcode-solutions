#include <vector>
#include <string>
#include <numeric> // Required for std::accumulate

class Solution {
public:
    int calPoints(std::vector<std::string>& operations) {
        std::vector<int> record;

        for (const std::string& op : operations) {
            if (op == "+") {
                // Add the previous two scores
                int score1 = record.back();
                int score2 = record[record.size() - 2];
                record.push_back(score1 + score2);
            } else if (op == "D") {
                // Double the previous score
                record.push_back(2 * record.back());
            } else if (op == "C") {
                // Invalidate the previous score
                record.pop_back();
            } else {
                // Record a new integer score using string-to-integer conversion
                record.push_back(std::stoi(op));
            }
        }
        
        // Return the sum of all scores using std::accumulate
        return std::accumulate(record.begin(), record.end(), 0);
    }
};
