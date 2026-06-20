class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        unordered_map<char, string> phone = {
            {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
        };

        vector<string> result;
        string current;

        function<void(int)> backtrack = [&](int index) {
            if (index == digits.size()) {
                result.push_back(current);
                return;
            }
            string letters = phone[digits[index]];
            for (int i = 0; i < letters.size(); i++) {
                current += letters[i];
                backtrack(index + 1);
                current.pop_back();
            }
        };

        backtrack(0);
        return result; 
        }
    
};
