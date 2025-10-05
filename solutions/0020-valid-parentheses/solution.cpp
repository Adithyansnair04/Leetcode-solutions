#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> matching = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            // If it's a closing bracket
            if (matching.count(c)) {
                if (st.empty() || st.top() != matching[c]) {
                    return false;  // not matching
                }
                st.pop();  // pop the matched opening bracket
            } else {
                st.push(c);  // push opening bracket
            }
        }

        return st.empty();  // valid if no unmatched brackets left
    }
};

