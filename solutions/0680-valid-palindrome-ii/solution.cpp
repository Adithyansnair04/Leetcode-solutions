class Solution {
public:
    bool validPalindrome(string s) {
        int right=s.size()-1,left=0;
        while (right>left){
            if(s[right]!=s[left]){
             return isPalin(s, left + 1, right) || isPalin(s, left, right - 1);
            }
            left++;
            right--;
        }
            
    return true;
    }
    private:
    bool isPalin(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};


