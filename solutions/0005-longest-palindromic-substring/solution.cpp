class Solution {
public:
    string longestPalindrome(string s) {
        int lenmax=0;
        int len;
        int start=0;
        auto find=[&](int left,int right){
            while (left >= 0 && right < s.size() && s[left] == s[right]){
                right++;
                left--;
            }
            return (right-left-1);
        };
        for(int i=0;i<s.size();i++){
            int len1=find(i,i);
            int len2=find(i,i+1);
            len=std::max(len1,len2);
            if(len>lenmax){
                lenmax=len;
                start=i-(len-1)/2;
            }
           

        }

      return s.substr(start,lenmax);   
    }
};
