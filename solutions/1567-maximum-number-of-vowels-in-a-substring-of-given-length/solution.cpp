class Solution {
public:
    int maxVowels(string s, int k) {
        int vowel=0;
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for(int i=0;i<k;i++){
            if(vowels.contains(s[i]))
                vowel++;
        }
        int maxv=vowel;
        for(int i=k;i<s.size();i++){
            if(vowels.contains(s[i]))
                vowel++;
            if(vowels.contains(s[i-k]))
                vowel--;
            maxv=std::max(maxv,vowel);
        }
    return maxv;

    }
};
