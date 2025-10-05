#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void backtrack(vector<string> &res, string current, int open, int close, int n) {
        // If the current string is of length 2*n, it is a valid sequence
        if (current.length() == 2 * n) {
            res.push_back(current);
            return;
        }
        // Add '(' if we still have open parentheses left
        if (open < n) {
            backtrack(res, current + '(', open + 1, close, n);
        }
        // Add ')' if we have more opens than closes
        if (close < open) {
            backtrack(res, current + ')', open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(res, "", 0, 0, n);
        return res;
    }
};

