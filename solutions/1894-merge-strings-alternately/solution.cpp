class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.length(),s2=word2.length();
        int num=s1+s2;
        std::string merged;
        merged.reserve(num);
        int m=0;
        int n=0;
        if(s1>=s2){
            while(n<s2){
                merged+=word1[m];
                m++;
                merged+=word2[n];
                n++;
            }
            if(s1-s2!=0)
                merged.append(word1,m,s1-m);
            
        }
        else{
            while(m<s1){
                merged+=word1[m];
                m++;
                merged+=word2[n];
                n++;
            }
            if(s2-s1!=0)
                merged.append(word2,n,s2-m);
            
        }
    return merged;

    }
};
