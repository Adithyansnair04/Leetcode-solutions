class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int pt = n - 1;
        if (digits[n-1] < 9) {
            digits[n-1] += 1;
        }
        else {
            while (pt > 0 && digits[pt] == 9) {  // added digits[pt] == 9 check
                digits[pt] = 0;
                pt--;
            }
            if (digits[pt] == 9){
                digits[pt]=0;
                digits.insert(digits.begin(), 1);}
            else
                digits[pt] += 1;
        }
        return digits;
    }
};