class Solution {
public:
    int strStr(string haystack, string needle) {
   int hLen = haystack.size();
        int nLen = needle.size();
        
        // If needle is longer than haystack, it's impossible to find a match
        if (hLen < nLen) {
            return -1;
        }
        
        // Now safely loop using signed integers
        for (int i = 0; i <= hLen - nLen; i++) {
            if (haystack.substr(i, nLen) == needle) {
                return i;
            }
        }
        
        return -1;
    }
};
