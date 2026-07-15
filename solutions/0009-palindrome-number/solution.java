class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        String str = Integer.toString(x);
        int right=str.length()-1;
        int left=0;
        while(right>left){
            if(str.charAt(right)!=str.charAt(left)){
                return false;
            }
            right--;
            left++;

        }
    return true;
    }
}
