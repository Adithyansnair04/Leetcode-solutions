class Solution {
    public int firstUniqChar(String s) {
        int charset[]=new int[26];
        for(int i=0;i<s.length();i++){
            char current = s.charAt(i);
            charset[current-'a']++;
        }
        for(int i=0;i<s.length();i++){
            char current = s.charAt(i);
            if(charset[current-'a']==1)
                return i;
    }
    return -1;
}

};
