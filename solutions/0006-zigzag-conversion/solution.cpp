class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || numRows >= s.size()) return s;
        std::vector<string> row(numRows);
        int cur=0,dir=1;
        for(int i=0;i<s.size();i++){
            row[cur]+=s[i];
            if (cur == 0) dir = 1;
            else if (cur == numRows - 1) dir = -1;
        cur += dir;
        }
    string result;
    for (int i = 0; i < numRows; i++) result += row[i];
    return result;
    }
};
