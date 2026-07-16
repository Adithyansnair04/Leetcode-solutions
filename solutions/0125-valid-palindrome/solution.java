class Solution {
    public boolean isPalindrome(String s) {
       int left=0;
       int right=s.length()-1;
       while (right>left){
            char chr =s.charAt(right);
            char chl =s.charAt(left);
            if (Character.isLetterOrDigit(chr)){
                if(Character.isUpperCase(chr))
                    chr=Character.toLowerCase(chr);}
            else  {
                right--;
                continue;}
            
            if (Character.isLetterOrDigit(chl)){
                if(Character.isUpperCase(chl))
                    chl=Character.toLowerCase(chl);}
            else {
                left++;
                continue;}
       if(chr!=chl){
        return false;
       }
       left++;
       right--;
    }
return true;
}
}
